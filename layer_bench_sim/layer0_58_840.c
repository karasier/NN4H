#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_52102580;

SignalI clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeclk_52148200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_840_52102580;
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

SignalI rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makerst_52148180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_840_52102580;
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

SignalI fill_52148160_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makefill_52148160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_52148160_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_840_52102580;
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

SignalI req_52148140_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makereq_52148140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_52148140_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_840_52102580;
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

SignalI ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeack__0_52148080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_840_52102580;
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

Block __52126780;

Block __52150140;

Block __52149660;

void code__52149660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61508000(),flag__z0_52551940_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52149660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52149660 = block;
   block->owner = (Object)__52150140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52149660;

   return block;
};

Block __52554520;

void code__52554520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61507860(),flag__z1_52551920_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52554520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52554520 = block;
   block->owner = (Object)__52150140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52554520;

   return block;
};

void code__52150140() {
 code__52149660();
 code__52554520();
}

Block make__52150140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52150140 = block;
   block->owner = (Object)__52126780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52150140;

   return block;
};

Block __52126620;

void code__52126620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61507800(),flag__z0_52551940_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61507740(),flag__z1_52551920_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52126620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52126620 = block;
   block->owner = (Object)__52126780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52126620;

   return block;
};

void code__52126780() {
   {
      Value cond = ack__add_48987140_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52150140();
   }
   else {
  code__52126620();
   }
      }
   }
}

Block make__52126780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52126780 = block;
   block->owner = (Object)__52936100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52126780;

   return block;
};

Block __52935920;

Block __52935420;

Block __52935160;

void code__52935160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_52429060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_5832_47465120______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61507500(),ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52935160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52935160 = block;
   block->owner = (Object)__52935420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52935160;

   return block;
};

Block __53478160;

void code__53478160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_52551960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_5833_47684580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61507360(),ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53478160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53478160 = block;
   block->owner = (Object)__52935420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53478160;

   return block;
};

void code__52935420() {
 code__52935160();
 code__53478160();
}

Block make__52935420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52935420 = block;
   block->owner = (Object)__52935920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52935420;

   return block;
};

void code__52935920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52551940_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = flag__z1_52551920_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52935420();
   }
      }
   }
}

Block make__52935920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52935920 = block;
   block->owner = (Object)__54094240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52935920;

   return block;
};

Block __54094100;

Block __54093800;

Block __54092900;

void code__54092900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61507200(),_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__54092900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54092900 = block;
   block->owner = (Object)__54093800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54092900;

   return block;
};

void code__54093800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61507280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54092900();
   }
      }
   }
}

Block make__54093800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54093800 = block;
   block->owner = (Object)__54094100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54093800;

   return block;
};

Block __54092160;

Block __54099800;

void code__54099800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61507040(),_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__54099800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54099800 = block;
   block->owner = (Object)__54092160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54099800;

   return block;
};

void code__54092160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61507120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54099800();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61506980(),_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__54092160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54092160 = block;
   block->owner = (Object)__54094100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54092160;

   return block;
};

Block __54098840;

Block __54098160;

void code__54098160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61506740(),_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__54098160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54098160 = block;
   block->owner = (Object)__54098840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54098160;

   return block;
};

void code__54098840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61506880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54098160();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61506680(),_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__54098840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54098840 = block;
   block->owner = (Object)__54094100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54098840;

   return block;
};

Block __54096520;

Block __54096300;

Block __54095700;

void code__54095700() {
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
                  src0 = _58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61506240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61506100(),_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61506040(),_58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__54095700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54095700 = block;
   block->owner = (Object)__54096300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54095700;

   return block;
};

void code__54096300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61506400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54095700();
   }
      }
   }
}

Block make__54096300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54096300 = block;
   block->owner = (Object)__54096520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54096300;

   return block;
};

Block __48664520;

Block __48663780;

void code__48663780() {
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
                  src0 = _58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61505820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61505720(),_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61505660(),_58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48663780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48663780 = block;
   block->owner = (Object)__48664520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48663780;

   return block;
};

void code__48664520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61505960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48663780();
   }
      }
   }
}

Block make__48664520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48664520 = block;
   block->owner = (Object)__54096520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48664520;

   return block;
};

Block __49166900;

Block __49165880;

Block __49162700;

void code__49162700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61529940(),_58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49162700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49162700 = block;
   block->owner = (Object)__49165880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49162700;

   return block;
};

Block __51658260;

void code__51658260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61529860(),_58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__51658260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51658260 = block;
   block->owner = (Object)__49165880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51658260;

   return block;
};

void code__49165880() {
{
      Value value = _58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61530000())) {
    code__49162700();
         }
         else if (value2integer(value) == value2integer(make__61529920())) {
    code__51658260();
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
                  src0 = _58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61529740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49165880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49165880 = block;
   block->owner = (Object)__49166900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49165880;

   return block;
};

void code__49166900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61505580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49165880();
   }
      }
   }
}

Block make__49166900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49166900 = block;
   block->owner = (Object)__54096520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49166900;

   return block;
};

void code__54096520() {
 code__54096300();
 code__48664520();
 code__49166900();
}

Block make__54096520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54096520 = block;
   block->owner = (Object)__54094100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54096520;

   return block;
};

void code__54094100() {
 code__54093800();
 code__54092160();
 code__54098840();
   {
      Value cond = fill_52148160_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54096520();
   }
      }
   }
}

Block make__54094100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54094100 = block;
   block->owner = (Object)__52103080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54094100;

   return block;
};

Block __60982540;

void code__60982540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      src1 = ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60982540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60982540 = block;
   block->owner = (Object)__61035860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60982540;

   return block;
};

Block __60982480;

void code__60982480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,value__a00_52429060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,value__a01_52551960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60982480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60982480 = block;
   block->owner = (Object)__61035700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60982480;

   return block;
};

Block __42190080;

Block __47633240;

void code__47633240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,make_ref_rangeS(mem_49149600_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100,value2integer(abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value),value2integer(abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47633240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47633240 = block;
   block->owner = (Object)__42190080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47633240;

   return block;
};

void code__42190080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49149600_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47633240();
   }
      }
   }
}

Block make__42190080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42190080 = block;
   block->owner = (Object)__48642580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42190080;

   return block;
};

Block __61034440;

void code__61034440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61034440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61034440 = block;
   block->owner = (Object)__61034140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61034440;

   return block;
};

Block __61034100;

void code__61034100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61034100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61034100 = block;
   block->owner = (Object)__61033940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61034100;

   return block;
};

Block __61033640;

void code__61033640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61033640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61033640 = block;
   block->owner = (Object)__61033480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61033640;

   return block;
};

Block __61033440;

void code__61033440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61033440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61033440 = block;
   block->owner = (Object)__61033280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61033440;

   return block;
};

Block __61032980;

void code__61032980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61032980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61032980 = block;
   block->owner = (Object)__61032820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61032980;

   return block;
};

Block __61032760;

void code__61032760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61032760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61032760 = block;
   block->owner = (Object)__61032560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61032760;

   return block;
};

Block __61031880;

void code__61031880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61031880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61031880 = block;
   block->owner = (Object)__61031720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61031880;

   return block;
};

Block __61031680;

void code__61031680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61031680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61031680 = block;
   block->owner = (Object)__61031520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61031680;

   return block;
};

Block __61031220;

void code__61031220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61031220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61031220 = block;
   block->owner = (Object)__61031060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61031220;

   return block;
};

Block __61031020;

void code__61031020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61031020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61031020 = block;
   block->owner = (Object)__61030860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61031020;

   return block;
};

Block __61030560;

void code__61030560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61030560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61030560 = block;
   block->owner = (Object)__61063100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61030560;

   return block;
};

Block __61063020;

void code__61063020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61063020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61063020 = block;
   block->owner = (Object)__61062680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61063020;

   return block;
};

Block __47096480;

Block __48964280;

void code__48964280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,make_ref_rangeS(mem_49165480_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100,value2integer(abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value),value2integer(abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48964280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48964280 = block;
   block->owner = (Object)__47096480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48964280;

   return block;
};

void code__47096480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49165480_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48964280();
   }
      }
   }
}

Block make__47096480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47096480 = block;
   block->owner = (Object)__47431320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47096480;

   return block;
};

Block __61061100;

void code__61061100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61061100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61061100 = block;
   block->owner = (Object)__61060880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61061100;

   return block;
};

Block __61060820;

void code__61060820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61060820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61060820 = block;
   block->owner = (Object)__61060520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61060820;

   return block;
};

Block __61060140;

void code__61060140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61060140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61060140 = block;
   block->owner = (Object)__61059980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61060140;

   return block;
};

Block __61059940;

void code__61059940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61059940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61059940 = block;
   block->owner = (Object)__61059780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61059940;

   return block;
};

Block __61059480;

void code__61059480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61059480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61059480 = block;
   block->owner = (Object)__61059320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61059480;

   return block;
};

Block __61059280;

void code__61059280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61059280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61059280 = block;
   block->owner = (Object)__61059120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61059280;

   return block;
};

Block __61058760;

void code__61058760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61058760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61058760 = block;
   block->owner = (Object)__61058520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61058760;

   return block;
};

Block __61058480;

void code__61058480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61058480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61058480 = block;
   block->owner = (Object)__61058240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61058480;

   return block;
};

Block __61057860;

void code__61057860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61057860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61057860 = block;
   block->owner = (Object)__61057700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61057860;

   return block;
};

Block __61057660;

void code__61057660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61057660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61057660 = block;
   block->owner = (Object)__61057500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61057660;

   return block;
};

Block __61057200;

void code__61057200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61057200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61057200 = block;
   block->owner = (Object)__61057040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61057200;

   return block;
};

Block __61057000;

void code__61057000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61057000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61057000 = block;
   block->owner = (Object)__61056820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61057000;

   return block;
};

Block __61055020;

void code__61055020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61055020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61055020 = block;
   block->owner = (Object)__61112180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61055020;

   return block;
};

Block __61112140;

void code__61112140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61112140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61112140 = block;
   block->owner = (Object)__61111940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61112140;

   return block;
};

Block __61111540;

void code__61111540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61111540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61111540 = block;
   block->owner = (Object)__61111320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61111540;

   return block;
};

Block __61111280;

void code__61111280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61111280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61111280 = block;
   block->owner = (Object)__61111120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61111280;

   return block;
};

Block __48636840;

Block __48636400;

Block __48889500;

void code__48889500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61400280(),_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48889500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48889500 = block;
   block->owner = (Object)__48636400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48889500;

   return block;
};

void code__48636400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61400360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48889500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61400220(),_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48636400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48636400 = block;
   block->owner = (Object)__48636840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48636400;

   return block;
};

Block __48888540;

Block __48888080;

void code__48888080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61400020(),_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48888080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48888080 = block;
   block->owner = (Object)__48888540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48888080;

   return block;
};

void code__48888540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61400120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48888080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61399960(),_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48888540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48888540 = block;
   block->owner = (Object)__48636840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48888540;

   return block;
};

Block __48887300;

Block __48886880;

void code__48886880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61399720(),_5814_45298000______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48886880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48886880 = block;
   block->owner = (Object)__48887300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48886880;

   return block;
};

void code__48887300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61399820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48886880();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61399640(),_5813_45299380______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48887300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48887300 = block;
   block->owner = (Object)__48636840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48887300;

   return block;
};

Block __49097220;

Block __49096800;

Block __49096440;

Block __49095940;

void code__49095940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_45299400______58_84_47501740______58_840_60688100->c_value,rv_48637240_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61431680(),rvok_48637180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49095940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49095940 = block;
   block->owner = (Object)__49096440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49095940;

   return block;
};

void code__49096440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_45299380______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61399120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49095940();
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
                  src0 = _5814_45298000______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61431540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_45298000______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61431420(),_5813_45299380______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49096440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49096440 = block;
   block->owner = (Object)__49096800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49096440;

   return block;
};

void code__49096800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61399220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49096440();
   }
      }
   }
}

Block make__49096800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49096800 = block;
   block->owner = (Object)__49097220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49096800;

   return block;
};

Block __49452880;

Block __49452060;

Block __49448620;

void code__49448620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,lv0_47295600_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61431020(),lvok0_48637220_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49448620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49448620 = block;
   block->owner = (Object)__49452060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49448620;

   return block;
};

void code__49452060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61431180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49448620();
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
                  src0 = _5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61430900();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61430800(),_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49452060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49452060 = block;
   block->owner = (Object)__49452880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49452060;

   return block;
};

void code__49452880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61431320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49452060();
   }
      }
   }
}

Block make__49452880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49452880 = block;
   block->owner = (Object)__49097220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49452880;

   return block;
};

Block __49841380;

Block __49840900;

Block __49840740;

void code__49840740() {
}

Block make__49840740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49840740 = block;
   block->owner = (Object)__49840900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49840740;

   return block;
};

Block __52384660;

void code__52384660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47766180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52384660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52384660 = block;
   block->owner = (Object)__49840900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52384660;

   return block;
};

void code__49840900() {
 code__49840740();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47766180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
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
                              src0 = lv0_47295600_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48637240_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61430100();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47766180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__52384660();
}

Block make__49840900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49840900 = block;
   block->owner = (Object)__49841380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49840900;

   return block;
};

void code__49841380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61430620(),ack__mac0_48987200_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61430560(),run_48636980_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__49840900();
}

Block make__49841380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49841380 = block;
   block->owner = (Object)__49097220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49841380;

   return block;
};

Block __52591700;

Block __52591380;

Block __52591060;

void code__52591060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,lv1_47581920_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61429400(),lvok1_48637200_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52591060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52591060 = block;
   block->owner = (Object)__52591380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52591060;

   return block;
};

void code__52591380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61429600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52591060();
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
                  src0 = _58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61429260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61429120(),_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52591380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52591380 = block;
   block->owner = (Object)__52591700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52591380;

   return block;
};

void code__52591700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61429700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52591380();
   }
      }
   }
}

Block make__52591700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52591700 = block;
   block->owner = (Object)__49097220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52591700;

   return block;
};

Block __52748020;

Block __52747540;

Block __52747380;

void code__52747380() {
}

Block make__52747380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52747380 = block;
   block->owner = (Object)__52747540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52747380;

   return block;
};

Block __53800460;

void code__53800460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48240060_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53800460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53800460 = block;
   block->owner = (Object)__52747540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53800460;

   return block;
};

void code__52747540() {
 code__52747380();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_48240060_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
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
                              src0 = lv1_47581920_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48637240_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61428560();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48240060_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__53800460();
}

Block make__52747540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52747540 = block;
   block->owner = (Object)__52748020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52747540;

   return block;
};

void code__52748020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61428960(),ack__mac0_48987200_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61428900(),run_48636980_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__52747540();
}

Block make__52748020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52748020 = block;
   block->owner = (Object)__49097220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52748020;

   return block;
};

void code__49097220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61399300(),run_48636980_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__49096800();
 code__49452880();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48637220_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok_48637180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49841380();
   }
      }
   }
 code__52591700();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48637200_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok_48637180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52748020();
   }
      }
   }
}

Block make__49097220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49097220 = block;
   block->owner = (Object)__48636840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49097220;

   return block;
};

Block __48885700;

void code__48885700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61428380(),rvok_48637180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61428320(),lvok0_48637220_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61428260(),av0_47766180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61428180(),lvok1_48637200_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61428100(),av1_48240060_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48885700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48885700 = block;
   block->owner = (Object)__48636840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48885700;

   return block;
};

void code__48636840() {
 code__48636400();
 code__48888540();
 code__48887300();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61399580(),ack__mac0_48987200_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61399500(),run_48636980_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_52148140_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = run_48636980_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49097220();
   }
   else {
  code__48885700();
   }
      }
   }
}

Block make__48636840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48636840 = block;
   block->owner = (Object)__53990820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48636840;

   return block;
};

Block __47778140;

Block __47777840;

Block __47776900;

void code__47776900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61427900(),_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47776900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47776900 = block;
   block->owner = (Object)__47777840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47776900;

   return block;
};

void code__47777840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61428020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47776900();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61427780(),_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47777840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47777840 = block;
   block->owner = (Object)__47778140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47777840;

   return block;
};

Block __47794900;

Block __47794420;

void code__47794420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61427560(),_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47794420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47794420 = block;
   block->owner = (Object)__47794900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47794420;

   return block;
};

void code__47794900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61427680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47794420();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61427500(),_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47794900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47794900 = block;
   block->owner = (Object)__47778140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47794900;

   return block;
};

Block __47792920;

Block __47815100;

void code__47815100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61427300(),_5814_45298000______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47815100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47815100 = block;
   block->owner = (Object)__47792920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47815100;

   return block;
};

void code__47792920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61427400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47815100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61427240(),_5813_45299380______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47792920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47792920 = block;
   block->owner = (Object)__47778140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47792920;

   return block;
};

Block __48916240;

Block __48915880;

Block __48915480;

Block __48915000;

void code__48915000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_45299400______58_84_47501740______58_840_60688100->c_value,rv_47778540_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61426560(),rvok_47778460_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48915000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48915000 = block;
   block->owner = (Object)__48915480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48915000;

   return block;
};

void code__48915480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_45299380______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61426720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48915000();
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
                  src0 = _5814_45298000______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61426440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_45298000______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61426340(),_5813_45299380______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48915480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48915480 = block;
   block->owner = (Object)__48915880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48915480;

   return block;
};

void code__48915880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61426820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48915480();
   }
      }
   }
}

Block make__48915880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48915880 = block;
   block->owner = (Object)__48916240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48915880;

   return block;
};

Block __49162880;

Block __49162160;

Block __49161300;

void code__49161300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,lv0_54110500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61426000(),lvok0_47778520_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49161300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49161300 = block;
   block->owner = (Object)__49162160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49161300;

   return block;
};

void code__49162160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61426160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49161300();
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
                  src0 = _5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61425860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61425720(),_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49162160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49162160 = block;
   block->owner = (Object)__49162880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49162160;

   return block;
};

void code__49162880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61426260();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49162160();
   }
      }
   }
}

Block make__49162880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49162880 = block;
   block->owner = (Object)__48916240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49162880;

   return block;
};

Block __49567140;

Block __49566600;

Block __49566420;

void code__49566420() {
}

Block make__49566420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49566420 = block;
   block->owner = (Object)__49566600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49566420;

   return block;
};

Block __52213580;

void code__52213580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47331140_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52213580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52213580 = block;
   block->owner = (Object)__49566600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52213580;

   return block;
};

void code__49566600() {
 code__49566420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47331140_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
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
                              src0 = lv0_54110500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_47778540_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61424920();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47331140_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__52213580();
}

Block make__49566600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49566600 = block;
   block->owner = (Object)__49567140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49566600;

   return block;
};

void code__49567140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61425420(),ack__mac1_48987160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61425340(),run_47778440_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__49566600();
}

Block make__49567140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49567140 = block;
   block->owner = (Object)__48916240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49567140;

   return block;
};

Block __52450100;

Block __52449780;

Block __52449400;

void code__52449400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,lv1_45466940_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61424460(),lvok1_47778500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52449400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52449400 = block;
   block->owner = (Object)__52449780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52449400;

   return block;
};

void code__52449780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61424620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52449400();
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
                  src0 = _58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61424340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61424240(),_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52449780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52449780 = block;
   block->owner = (Object)__52450100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52449780;

   return block;
};

void code__52450100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61424720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52449780();
   }
      }
   }
}

Block make__52450100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52450100 = block;
   block->owner = (Object)__48916240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52450100;

   return block;
};

Block __52651740;

Block __52651160;

Block __52651000;

void code__52651000() {
}

Block make__52651000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52651000 = block;
   block->owner = (Object)__52651160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52651000;

   return block;
};

Block __53716660;

void code__53716660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_47617420_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53716660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53716660 = block;
   block->owner = (Object)__52651160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53716660;

   return block;
};

void code__52651160() {
 code__52651000();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_47617420_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
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
                              src0 = lv1_45466940_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_47778540_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61423680();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_47617420_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__53716660();
}

Block make__52651160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52651160 = block;
   block->owner = (Object)__52651740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52651160;

   return block;
};

void code__52651740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61424080(),ack__mac1_48987160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61424020(),run_47778440_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__52651160();
}

Block make__52651740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52651740 = block;
   block->owner = (Object)__48916240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52651740;

   return block;
};

void code__48916240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61426900(),run_47778440_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__48915880();
 code__49162880();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47778520_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok_47778460_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49567140();
   }
      }
   }
 code__52450100();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47778500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok_47778460_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52651740();
   }
      }
   }
}

Block make__48916240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48916240 = block;
   block->owner = (Object)__47778140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48916240;

   return block;
};

Block __47812160;

void code__47812160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61513500(),rvok_47778460_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61513400(),lvok0_47778520_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61513220(),av0_47331140_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61513160(),lvok1_47778500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61513080(),av1_47617420_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47812160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47812160 = block;
   block->owner = (Object)__47778140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47812160;

   return block;
};

void code__47778140() {
 code__47777840();
 code__47794900();
 code__47792920();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61427160(),ack__mac1_48987160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61427060(),run_47778440_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac0_48987200_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = run_47778440_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48916240();
   }
   else {
  code__47812160();
   }
      }
   }
}

Block make__47778140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47778140 = block;
   block->owner = (Object)__53944660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47778140;

   return block;
};

Block __61109000;

void code__61109000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61109000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61109000 = block;
   block->owner = (Object)__61108840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61109000;

   return block;
};

Block __61108800;

void code__61108800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61108800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61108800 = block;
   block->owner = (Object)__61108600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61108800;

   return block;
};

Block __61108240;

void code__61108240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61108240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61108240 = block;
   block->owner = (Object)__61108080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61108240;

   return block;
};

Block __61108040;

void code__61108040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61108040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61108040 = block;
   block->owner = (Object)__61107860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61108040;

   return block;
};

Block __61107480;

void code__61107480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61107480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61107480 = block;
   block->owner = (Object)__61107300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61107480;

   return block;
};

Block __61107260;

void code__61107260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61107260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61107260 = block;
   block->owner = (Object)__61107080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61107260;

   return block;
};

Block __61106720;

void code__61106720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61106720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61106720 = block;
   block->owner = (Object)__61106560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61106720;

   return block;
};

Block __61106520;

void code__61106520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61106520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61106520 = block;
   block->owner = (Object)__61106320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61106520;

   return block;
};

Block __61104340;

void code__61104340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61104340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61104340 = block;
   block->owner = (Object)__61104180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61104340;

   return block;
};

Block __61104140;

void code__61104140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61104140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61104140 = block;
   block->owner = (Object)__61177620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61104140;

   return block;
};

Block __61176300;

void code__61176300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61176300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61176300 = block;
   block->owner = (Object)__61176080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61176300;

   return block;
};

Block __61176040;

void code__61176040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61176040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61176040 = block;
   block->owner = (Object)__61175880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61176040;

   return block;
};

Block __61175580;

void code__61175580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61175580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61175580 = block;
   block->owner = (Object)__61175400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61175580;

   return block;
};

Block __61175320;

void code__61175320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61175320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61175320 = block;
   block->owner = (Object)__61175060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61175320;

   return block;
};

Block __52586160;

Block __52584600;

Block __52608760;

void code__52608760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,lv0_52212540_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61510480(),lvok0_52586360_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52608760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52608760 = block;
   block->owner = (Object)__52584600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52608760;

   return block;
};

Block __52766160;

void code__52766160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,rv0_52445480_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61510340(),rvok0_52586320_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52766160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52766160 = block;
   block->owner = (Object)__52584600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52766160;

   return block;
};

Block __53064900;

Block __53064340;

void code__53064340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52212540_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      src1 = rv0_52445480_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53064340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53064340 = block;
   block->owner = (Object)__53064900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53064340;

   return block;
};

void code__53064900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61510180(),run_52586280_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61510120(),ack__add_48987140_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__53064340();
}

Block make__53064900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53064900 = block;
   block->owner = (Object)__52584600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53064900;

   return block;
};

Block __53834020;

void code__53834020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,lv1_52386660_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61509800(),lvok1_52586340_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53834020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53834020 = block;
   block->owner = (Object)__52584600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53834020;

   return block;
};

Block __54097380;

void code__54097380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,rv1_52586380_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61509660(),rvok1_52586300_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__54097380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54097380 = block;
   block->owner = (Object)__52584600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54097380;

   return block;
};

Block __47381040;

Block __47395240;

void code__47395240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_52386660_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      src1 = rv1_52586380_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47395240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47395240 = block;
   block->owner = (Object)__47381040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47395240;

   return block;
};

void code__47381040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61509500(),run_52586280_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61509440(),ack__add_48987140_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__47395240();
}

Block make__47381040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47381040 = block;
   block->owner = (Object)__52584600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47381040;

   return block;
};

void code__52584600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61510620(),run_52586280_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__52608760();
 code__52766160();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52586360_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok0_52586320_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53064900();
   }
      }
   }
 code__53834020();
 code__54097380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52586340_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok1_52586300_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47381040();
   }
      }
   }
}

Block make__52584600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52584600 = block;
   block->owner = (Object)__52586160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52584600;

   return block;
};

Block __52585680;

void code__52585680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61509200(),lvok0_52586360_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61509140(),rvok0_52586320_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61509060(),lvok1_52586340_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61508960(),rvok1_52586300_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52585680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52585680 = block;
   block->owner = (Object)__52586160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52585680;

   return block;
};

void code__52586160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61511060(),ack__add_48987140_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61510880(),run_52586280_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac1_48987160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         src1 = run_52586280_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52584600();
   }
   else {
  code__52585680();
   }
      }
   }
}

Block make__52586160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52586160 = block;
   block->owner = (Object)__48987360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52586160;

   return block;
};

Value make__61400360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61400280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61400220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61400120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61400020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61399960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61399820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61399720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61399640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61399580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61399500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61399300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61399220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61399120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61431680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61431540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61431420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61431320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61431180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61431020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61430900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61430800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61430620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61430560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61430100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61429700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61429600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61429400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61429260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61429120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61428960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61428900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61428560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61428380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61428320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61428260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61428180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61428100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61428020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61427900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61427780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61427680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61427560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61427500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61427400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61427300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61427240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61427160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61427060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61426900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61426820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61426720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61426560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61426440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61426340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61426260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61426160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61426000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61425860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61425720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61425420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61425340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61424920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61424720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61424620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61424460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61424340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61424240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61424080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61424020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61423680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61513500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61513400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61513220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61513160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61513080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61511060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61510880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61510620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61510480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61510340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61510180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61510120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61509800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61509660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61509500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61509440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61509200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61509140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61509060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61508960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61508000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61507860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61507800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61507740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61507500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61507360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61507280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61507200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61507120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61507040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61506980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61506880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61506740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61506680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61506400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61506240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61506100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61506040() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61505960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61505820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61505720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61505660() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61505580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61530000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61529940() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61529920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61529860() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61529740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_48639220;

SignalI ack__mac0_48987200_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeack__mac0_48987200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac0_48987200_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = "ack_mac0";
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

SignalI ack__mac1_48987160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeack__mac1_48987160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac1_48987160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = "ack_mac1";
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

SignalI ack__add_48987140_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeack__add_48987140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_48987140_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_5897_49133320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_5895_49133300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_5896_49133160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58126_49344080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58124_49344060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58125_49343060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58143_49569360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58144_51215260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58177_51640580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = ":177";
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

SignalI _58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58178_51763860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = ":178";
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

SignalI _58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58207_52009960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = ":207";
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

SignalI _58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58208_52076080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = ":208";
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

SignalI value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makevalue__z0_52166260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makevalue__z1_52371280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI value__a00_52429060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makevalue__a00_52429060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_52429060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI value__a01_52551960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makevalue__a01_52551960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_52551960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = "value_a01";
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

SignalI flag__z0_52551940_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeflag__z0_52551940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52551940_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI flag__z1_52551920_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeflag__z1_52551920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52551920_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeack__a00_52551900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeack__a01_52551880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = "ack_a01";
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

SignalI _5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_5899_52551860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58100_52551760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58101_52671240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58128_52671220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58129_52671120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58130_52768800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
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

SignalI _58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58192_52900180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = ":192";
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

SignalI _58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58193_53063640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = ":193";
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

SignalI _58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI make_58194_53063540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer0_58_84_48639220;
   signalI->name = ":194";
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

SystemI func0_45220940;

SystemI makefunc0_45220940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_45220940 = systemI;
   systemI->owner = (Object)layer0_58_84_48639220;
   systemI->name = "func0";
   systemI->system = func0_58_841_53880540;

   return systemI;
};

SystemI func1_47249060;

SystemI makefunc1_47249060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_47249060 = systemI;
   systemI->owner = (Object)layer0_58_84_48639220;
   systemI->name = "func1";
   systemI->system = func1_58_840_53901660;

   return systemI;
};

Scope channel__w0_5883_48638880;

SignalI trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI maketrig__r_48889540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_5883_48638880;
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

SignalI trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI maketrig__w_48889520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_5883_48638880;
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

SignalI dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makedbus__r_48952260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_5883_48638880;
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

SignalI dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makedbus__w_49036720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_5883_48638880;
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

SignalI abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__r_49036620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_5883_48638880;
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

SignalI abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__w_49036460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_5883_48638880;
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

SignalI mem_49149600_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makemem_49149600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49149600_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_5883_48638880;
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

Scope raddr_5884_48638520;

Scope makeraddr_5884_48638520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_48638520 = scope;
   scope->owner = (Object)channel__w0_5883_48638880;
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

Scope waddr_5889_48638080;

Scope makewaddr_5889_48638080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_48638080 = scope;
   scope->owner = (Object)channel__w0_5883_48638880;
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

Scope rinc_5894_48637580;

Scope makerinc_5894_48637580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_48637580 = scope;
   scope->owner = (Object)channel__w0_5883_48638880;
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

Scope winc_5898_48637160;

Scope makewinc_5898_48637160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_48637160 = scope;
   scope->owner = (Object)channel__w0_5883_48638880;
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

Scope rdec_58102_48636700;

Scope makerdec_58102_48636700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_48636700 = scope;
   scope->owner = (Object)channel__w0_5883_48638880;
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

Scope wdec_58107_48636220;

Scope makewdec_58107_48636220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_48636220 = scope;
   scope->owner = (Object)channel__w0_5883_48638880;
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

Behavior __48642580;

Behavior make__48642580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48642580 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_neg += 1;
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->neg = realloc(clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->neg,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_neg*sizeof(Object));
clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->neg[clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_neg-1] = (Object)behavior;
   behavior->block = make__42190080();

   return behavior;
}

Behavior __61034140;

Behavior make__61034140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61034140 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[dbus__r_48952260_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61034440();

   return behavior;
}

Behavior __61033940;

Behavior make__61033940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61033940 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_5897_49133320_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61034100();

   return behavior;
}

Behavior __61033480;

Behavior make__61033480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61033480 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[trig__r_48889540_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61033640();

   return behavior;
}

Behavior __61033280;

Behavior make__61033280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61033280 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_5895_49133300_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61033440();

   return behavior;
}

Behavior __61032820;

Behavior make__61032820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61032820 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[abus__r_49036620_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61032980();

   return behavior;
}

Behavior __61032560;

Behavior make__61032560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61032560 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_5896_49133160_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61032760();

   return behavior;
}

Behavior __61031720;

Behavior make__61031720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61031720 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[trig__w_48889520_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61031880();

   return behavior;
}

Behavior __61031520;

Behavior make__61031520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61031520 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_5899_52551860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61031680();

   return behavior;
}

Behavior __61031060;

Behavior make__61031060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61031060 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[abus__w_49036460_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61031220();

   return behavior;
}

Behavior __61030860;

Behavior make__61030860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61030860 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58100_52551760_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61031020();

   return behavior;
}

Behavior __61063100;

Behavior make__61063100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61063100 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[dbus__w_49036720_channel__w0_5883_48638880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61030560();

   return behavior;
}

Behavior __61062680;

Behavior make__61062680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61062680 = behavior;
   behavior->owner = (Object)channel__w0_5883_48638880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58101_52671240_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61063020();

   return behavior;
}

Scope makechannel__w0_5883_48638880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_48638880 = scope;
   scope->owner = (Object)layer0_58_84_48639220;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48889540();
   scope->inners[1] = maketrig__w_48889520();
   scope->inners[2] = makedbus__r_48952260();
   scope->inners[3] = makedbus__w_49036720();
   scope->inners[4] = makeabus__r_49036620();
   scope->inners[5] = makeabus__w_49036460();
   scope->inners[6] = makemem_49149600();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_48638520();
   scope->scopes[1] = makewaddr_5889_48638080();
   scope->scopes[2] = makerinc_5894_48637580();
   scope->scopes[3] = makewinc_5898_48637160();
   scope->scopes[4] = makerdec_58102_48636700();
   scope->scopes[5] = makewdec_58107_48636220();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48642580();
   scope->behaviors[1] = make__61034140();
   scope->behaviors[2] = make__61033940();
   scope->behaviors[3] = make__61033480();
   scope->behaviors[4] = make__61033280();
   scope->behaviors[5] = make__61032820();
   scope->behaviors[6] = make__61032560();
   scope->behaviors[7] = make__61031720();
   scope->behaviors[8] = make__61031520();
   scope->behaviors[9] = make__61031060();
   scope->behaviors[10] = make__61030860();
   scope->behaviors[11] = make__61063100();
   scope->behaviors[12] = make__61062680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_48642440;

SignalI trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI maketrig__r_48637680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w1_58112_48642440;
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

SignalI trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI maketrig__w_48637660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w1_58112_48642440;
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

SignalI dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makedbus__r_48951700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w1_58112_48642440;
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

SignalI dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makedbus__w_49034260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w1_58112_48642440;
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

SignalI abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__r_49034140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w1_58112_48642440;
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

SignalI abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__w_49034000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w1_58112_48642440;
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

SignalI mem_49165480_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makemem_49165480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49165480_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w1_58112_48642440;
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

Scope raddr_58113_48642000;

Scope makeraddr_58113_48642000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_48642000 = scope;
   scope->owner = (Object)channel__w1_58112_48642440;
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

Scope waddr_58118_48641520;

Scope makewaddr_58118_48641520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_48641520 = scope;
   scope->owner = (Object)channel__w1_58112_48642440;
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

Scope rinc_58123_48640820;

Scope makerinc_58123_48640820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_48640820 = scope;
   scope->owner = (Object)channel__w1_58112_48642440;
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

Scope winc_58127_48640400;

Scope makewinc_58127_48640400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_48640400 = scope;
   scope->owner = (Object)channel__w1_58112_48642440;
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

Scope rdec_58131_48639860;

Scope makerdec_58131_48639860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_48639860 = scope;
   scope->owner = (Object)channel__w1_58112_48642440;
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

Scope wdec_58136_48638580;

Scope makewdec_58136_48638580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_48638580 = scope;
   scope->owner = (Object)channel__w1_58112_48642440;
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

Behavior __47431320;

Behavior make__47431320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47431320 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_neg += 1;
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->neg = realloc(clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->neg,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_neg*sizeof(Object));
clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->neg[clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_neg-1] = (Object)behavior;
   behavior->block = make__47096480();

   return behavior;
}

Behavior __61060880;

Behavior make__61060880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61060880 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[dbus__r_48951700_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61061100();

   return behavior;
}

Behavior __61060520;

Behavior make__61060520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61060520 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58126_49344080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61060820();

   return behavior;
}

Behavior __61059980;

Behavior make__61059980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61059980 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[trig__r_48637680_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61060140();

   return behavior;
}

Behavior __61059780;

Behavior make__61059780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61059780 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58124_49344060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61059940();

   return behavior;
}

Behavior __61059320;

Behavior make__61059320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61059320 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[abus__r_49034140_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61059480();

   return behavior;
}

Behavior __61059120;

Behavior make__61059120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61059120 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58125_49343060_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61059280();

   return behavior;
}

Behavior __61058520;

Behavior make__61058520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61058520 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[trig__w_48637660_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61058760();

   return behavior;
}

Behavior __61058240;

Behavior make__61058240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61058240 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58128_52671220_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61058480();

   return behavior;
}

Behavior __61057700;

Behavior make__61057700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61057700 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[abus__w_49034000_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61057860();

   return behavior;
}

Behavior __61057500;

Behavior make__61057500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61057500 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58129_52671120_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61057660();

   return behavior;
}

Behavior __61057040;

Behavior make__61057040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61057040 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[dbus__w_49034260_channel__w1_58112_48642440_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61057200();

   return behavior;
}

Behavior __61056820;

Behavior make__61056820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61056820 = behavior;
   behavior->owner = (Object)channel__w1_58112_48642440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58130_52768800_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61057000();

   return behavior;
}

Scope makechannel__w1_58112_48642440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_48642440 = scope;
   scope->owner = (Object)layer0_58_84_48639220;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48637680();
   scope->inners[1] = maketrig__w_48637660();
   scope->inners[2] = makedbus__r_48951700();
   scope->inners[3] = makedbus__w_49034260();
   scope->inners[4] = makeabus__r_49034140();
   scope->inners[5] = makeabus__w_49034000();
   scope->inners[6] = makemem_49165480();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_48642000();
   scope->scopes[1] = makewaddr_58118_48641520();
   scope->scopes[2] = makerinc_58123_48640820();
   scope->scopes[3] = makewinc_58127_48640400();
   scope->scopes[4] = makerdec_58131_48639860();
   scope->scopes[5] = makewdec_58136_48638580();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47431320();
   scope->behaviors[1] = make__61060880();
   scope->behaviors[2] = make__61060520();
   scope->behaviors[3] = make__61059980();
   scope->behaviors[4] = make__61059780();
   scope->behaviors[5] = make__61059320();
   scope->behaviors[6] = make__61059120();
   scope->behaviors[7] = make__61058520();
   scope->behaviors[8] = make__61058240();
   scope->behaviors[9] = make__61057700();
   scope->behaviors[10] = make__61057500();
   scope->behaviors[11] = make__61057040();
   scope->behaviors[12] = make__61056820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_47431080;

SignalI reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makereg__0_47815460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__accum_58141_47431080;
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

SignalI reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makereg__1_48514300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__accum_58141_47431080;
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

Scope anum_58142_47430140;

Scope makeanum_58142_47430140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_47430140 = scope;
   scope->owner = (Object)channel__accum_58141_47431080;
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

Scope raddr_58145_47429360;

Scope makeraddr_58145_47429360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_47429360 = scope;
   scope->owner = (Object)channel__accum_58141_47431080;
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

Scope waddr_58149_47428340;

Scope makewaddr_58149_47428340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_47428340 = scope;
   scope->owner = (Object)channel__accum_58141_47431080;
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

Scope rinc_58153_47426520;

SignalI abus__r_47425960_rinc_58153_47426520_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__r_47425960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47425960_rinc_58153_47426520_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rinc_58153_47426520;
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

Scope makerinc_58153_47426520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_47426520 = scope;
   scope->owner = (Object)channel__accum_58141_47431080;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47425960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_47425760;

SignalI abus__w_47424160_winc_58158_47425760_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__w_47424160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47424160_winc_58158_47425760_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)winc_58158_47425760;
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

Scope makewinc_58158_47425760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_47425760 = scope;
   scope->owner = (Object)channel__accum_58141_47431080;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47424160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_47398600;

SignalI abus__r_47395960_rdec_58163_47398600_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__r_47395960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47395960_rdec_58163_47398600_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rdec_58163_47398600;
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

Scope makerdec_58163_47398600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_47398600 = scope;
   scope->owner = (Object)channel__accum_58141_47431080;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47395960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_47395660;

SignalI abus__w_47394160_wdec_58168_47395660_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__w_47394160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47394160_wdec_58168_47395660_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)wdec_58168_47395660;
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

Scope makewdec_58168_47395660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_47395660 = scope;
   scope->owner = (Object)channel__accum_58141_47431080;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47394160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61112180;

Behavior make__61112180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61112180 = behavior;
   behavior->owner = (Object)channel__accum_58141_47431080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[reg__0_47815460_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61055020();

   return behavior;
}

Behavior __61111940;

Behavior make__61111940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61111940 = behavior;
   behavior->owner = (Object)channel__accum_58141_47431080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58143_49569360_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61112140();

   return behavior;
}

Behavior __61111320;

Behavior make__61111320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61111320 = behavior;
   behavior->owner = (Object)channel__accum_58141_47431080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[reg__1_48514300_channel__accum_58141_47431080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61111540();

   return behavior;
}

Behavior __61111120;

Behavior make__61111120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61111120 = behavior;
   behavior->owner = (Object)channel__accum_58141_47431080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58144_51215260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61111280();

   return behavior;
}

Scope makechannel__accum_58141_47431080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_47431080 = scope;
   scope->owner = (Object)layer0_58_84_48639220;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47815460();
   scope->inners[1] = makereg__1_48514300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_47430140();
   scope->scopes[1] = makeraddr_58145_47429360();
   scope->scopes[2] = makewaddr_58149_47428340();
   scope->scopes[3] = makerinc_58153_47426520();
   scope->scopes[4] = makewinc_58158_47425760();
   scope->scopes[5] = makerdec_58163_47398600();
   scope->scopes[6] = makewdec_58168_47395660();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61112180();
   scope->behaviors[1] = make__61111940();
   scope->behaviors[2] = make__61111320();
   scope->behaviors[3] = make__61111120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_45580820;

SignalI lv0_47295600_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelv0_47295600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47295600_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

SignalI lv1_47581920_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelv1_47581920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47581920_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

SignalI av0_47766180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeav0_47766180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47766180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

SignalI av1_48240060_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeav1_48240060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48240060_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

SignalI rv_48637240_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makerv_48637240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48637240_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

SignalI lvok0_48637220_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelvok0_48637220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48637220_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

SignalI lvok1_48637200_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelvok1_48637200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48637200_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

SignalI rvok_48637180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makervok_48637180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48637180_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

SignalI run_48636980_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makerun_48636980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48636980_mac__n1_58173_45580820_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58173_45580820;
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

Behavior __53990820;

Behavior make__53990820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53990820 = behavior;
   behavior->owner = (Object)mac__n1_58173_45580820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos = realloc(clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos[clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__48636840();

   return behavior;
}

Scope makemac__n1_58173_45580820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_45580820 = scope;
   scope->owner = (Object)layer0_58_84_48639220;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47295600();
   scope->inners[1] = makelv1_47581920();
   scope->inners[2] = makeav0_47766180();
   scope->inners[3] = makeav1_48240060();
   scope->inners[4] = makerv_48637240();
   scope->inners[5] = makelvok0_48637220();
   scope->inners[6] = makelvok1_48637200();
   scope->inners[7] = makervok_48637180();
   scope->inners[8] = makerun_48636980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53990820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58174_53990700;

SignalI lv0_54110500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelv0_54110500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_54110500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

SignalI lv1_45466940_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelv1_45466940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_45466940_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

SignalI av0_47331140_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeav0_47331140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47331140_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

SignalI av1_47617420_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeav1_47617420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_47617420_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

SignalI rv_47778540_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makerv_47778540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_47778540_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

SignalI lvok0_47778520_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelvok0_47778520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47778520_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

SignalI lvok1_47778500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelvok1_47778500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47778500_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

SignalI rvok_47778460_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makervok_47778460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_47778460_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

SignalI run_47778440_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makerun_47778440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47778440_mac__n1_58174_53990700_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58174_53990700;
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

Behavior __53944660;

Behavior make__53944660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53944660 = behavior;
   behavior->owner = (Object)mac__n1_58174_53990700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos = realloc(clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos[clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__47778140();

   return behavior;
}

Scope makemac__n1_58174_53990700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58174_53990700 = scope;
   scope->owner = (Object)layer0_58_84_48639220;
   scope->name = "mac_n1:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_54110500();
   scope->inners[1] = makelv1_45466940();
   scope->inners[2] = makeav0_47331140();
   scope->inners[3] = makeav1_47617420();
   scope->inners[4] = makerv_47778540();
   scope->inners[5] = makelvok0_47778520();
   scope->inners[6] = makelvok1_47778500();
   scope->inners[7] = makervok_47778460();
   scope->inners[8] = makerun_47778440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53944660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58175_53944540;

SignalI reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makereg__0_54115760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__bias_58175_53944540;
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

SignalI reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makereg__1_47049660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__bias_58175_53944540;
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

Scope anum_58176_53960520;

Scope makeanum_58176_53960520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58176_53960520 = scope;
   scope->owner = (Object)channel__bias_58175_53944540;
   scope->name = "anum:176";
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

Scope raddr_58179_53960100;

Scope makeraddr_58179_53960100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58179_53960100 = scope;
   scope->owner = (Object)channel__bias_58175_53944540;
   scope->name = "raddr:179";
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

Scope waddr_58183_53959680;

Scope makewaddr_58183_53959680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58183_53959680 = scope;
   scope->owner = (Object)channel__bias_58175_53944540;
   scope->name = "waddr:183";
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

Scope rinc_58187_53959260;

SignalI abus__r_53958840_rinc_58187_53959260_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__r_53958840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53958840_rinc_58187_53959260_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rinc_58187_53959260;
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

Scope makerinc_58187_53959260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58187_53959260 = scope;
   scope->owner = (Object)channel__bias_58175_53944540;
   scope->name = "rinc:187";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53958840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58191_53958660;

SignalI abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__w_53958280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)winc_58191_53958660;
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

Behavior __61104180;

Behavior make__61104180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61104180 = behavior;
   behavior->owner = (Object)winc_58191_53958660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[abus__w_53958280_winc_58191_53958660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61104340();

   return behavior;
}

Behavior __61177620;

Behavior make__61177620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61177620 = behavior;
   behavior->owner = (Object)winc_58191_53958660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58194_53063540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61104140();

   return behavior;
}

Scope makewinc_58191_53958660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58191_53958660 = scope;
   scope->owner = (Object)channel__bias_58175_53944540;
   scope->name = "winc:191";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53958280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61104180();
   scope->behaviors[1] = make__61177620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58195_53957900;

SignalI abus__r_53957520_rdec_58195_53957900_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__r_53957520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53957520_rdec_58195_53957900_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rdec_58195_53957900;
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

Scope makerdec_58195_53957900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58195_53957900 = scope;
   scope->owner = (Object)channel__bias_58175_53944540;
   scope->name = "rdec:195";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53957520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58200_53957400;

SignalI abus__w_53957020_wdec_58200_53957400_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__w_53957020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53957020_wdec_58200_53957400_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)wdec_58200_53957400;
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

Scope makewdec_58200_53957400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58200_53957400 = scope;
   scope->owner = (Object)channel__bias_58175_53944540;
   scope->name = "wdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53957020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61108840;

Behavior make__61108840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61108840 = behavior;
   behavior->owner = (Object)channel__bias_58175_53944540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61109000();

   return behavior;
}

Behavior __61108600;

Behavior make__61108600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61108600 = behavior;
   behavior->owner = (Object)channel__bias_58175_53944540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58177_51640580_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61108800();

   return behavior;
}

Behavior __61108080;

Behavior make__61108080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61108080 = behavior;
   behavior->owner = (Object)channel__bias_58175_53944540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61108240();

   return behavior;
}

Behavior __61107860;

Behavior make__61107860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61107860 = behavior;
   behavior->owner = (Object)channel__bias_58175_53944540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58178_51763860_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61108040();

   return behavior;
}

Behavior __61107300;

Behavior make__61107300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61107300 = behavior;
   behavior->owner = (Object)channel__bias_58175_53944540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[reg__0_54115760_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61107480();

   return behavior;
}

Behavior __61107080;

Behavior make__61107080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61107080 = behavior;
   behavior->owner = (Object)channel__bias_58175_53944540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58192_52900180_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61107260();

   return behavior;
}

Behavior __61106560;

Behavior make__61106560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61106560 = behavior;
   behavior->owner = (Object)channel__bias_58175_53944540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[reg__1_47049660_channel__bias_58175_53944540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61106720();

   return behavior;
}

Behavior __61106320;

Behavior make__61106320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61106320 = behavior;
   behavior->owner = (Object)channel__bias_58175_53944540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58193_53063640_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61106520();

   return behavior;
}

Scope makechannel__bias_58175_53944540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58175_53944540 = scope;
   scope->owner = (Object)layer0_58_84_48639220;
   scope->name = "channel_bias:175";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54115760();
   scope->inners[1] = makereg__1_47049660();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58176_53960520();
   scope->scopes[1] = makeraddr_58179_53960100();
   scope->scopes[2] = makewaddr_58183_53959680();
   scope->scopes[3] = makerinc_58187_53959260();
   scope->scopes[4] = makewinc_58191_53958660();
   scope->scopes[5] = makerdec_58195_53957900();
   scope->scopes[6] = makewdec_58200_53957400();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61108840();
   scope->behaviors[1] = make__61108600();
   scope->behaviors[2] = make__61108080();
   scope->behaviors[3] = make__61107860();
   scope->behaviors[4] = make__61107300();
   scope->behaviors[5] = make__61107080();
   scope->behaviors[6] = make__61106560();
   scope->behaviors[7] = make__61106320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58205_49487460;

SignalI reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makereg__0_49630340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__z_58205_49487460;
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

SignalI reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makereg__1_51571800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__z_58205_49487460;
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

Scope anum_58206_49486780;

Scope makeanum_58206_49486780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58206_49486780 = scope;
   scope->owner = (Object)channel__z_58205_49487460;
   scope->name = "anum:206";
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

Scope raddr_58209_49486000;

Scope makeraddr_58209_49486000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58209_49486000 = scope;
   scope->owner = (Object)channel__z_58205_49487460;
   scope->name = "raddr:209";
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

Scope waddr_58213_49485200;

Scope makewaddr_58213_49485200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58213_49485200 = scope;
   scope->owner = (Object)channel__z_58205_49487460;
   scope->name = "waddr:213";
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

Scope rinc_58217_49484560;

SignalI abus__r_49483320_rinc_58217_49484560_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__r_49483320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49483320_rinc_58217_49484560_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rinc_58217_49484560;
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

Scope makerinc_58217_49484560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58217_49484560 = scope;
   scope->owner = (Object)channel__z_58205_49487460;
   scope->name = "rinc:217";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49483320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58221_49482780;

SignalI abus__w_49481740_winc_58221_49482780_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__w_49481740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49481740_winc_58221_49482780_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)winc_58221_49482780;
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

Scope makewinc_58221_49482780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58221_49482780 = scope;
   scope->owner = (Object)channel__z_58205_49487460;
   scope->name = "winc:221";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49481740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58225_49480240;

SignalI abus__r_49502220_rdec_58225_49480240_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__r_49502220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49502220_rdec_58225_49480240_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rdec_58225_49480240;
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

Scope makerdec_58225_49480240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58225_49480240 = scope;
   scope->owner = (Object)channel__z_58205_49487460;
   scope->name = "rdec:225";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49502220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58230_49501980;

SignalI abus__w_49501520_wdec_58230_49501980_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeabus__w_49501520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49501520_wdec_58230_49501980_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)wdec_58230_49501980;
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

Scope makewdec_58230_49501980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58230_49501980 = scope;
   scope->owner = (Object)channel__z_58205_49487460;
   scope->name = "wdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49501520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61176080;

Behavior make__61176080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61176080 = behavior;
   behavior->owner = (Object)channel__z_58205_49487460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[reg__0_49630340_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61176300();

   return behavior;
}

Behavior __61175880;

Behavior make__61175880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61175880 = behavior;
   behavior->owner = (Object)channel__z_58205_49487460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58207_52009960_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61176040();

   return behavior;
}

Behavior __61175400;

Behavior make__61175400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61175400 = behavior;
   behavior->owner = (Object)channel__z_58205_49487460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[reg__1_51571800_channel__z_58205_49487460_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61175580();

   return behavior;
}

Behavior __61175060;

Behavior make__61175060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61175060 = behavior;
   behavior->owner = (Object)channel__z_58205_49487460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   _58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   _58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[_58208_52076080_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61175320();

   return behavior;
}

Scope makechannel__z_58205_49487460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58205_49487460 = scope;
   scope->owner = (Object)layer0_58_84_48639220;
   scope->name = "channel_z:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49630340();
   scope->inners[1] = makereg__1_51571800();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58206_49486780();
   scope->scopes[1] = makeraddr_58209_49486000();
   scope->scopes[2] = makewaddr_58213_49485200();
   scope->scopes[3] = makerinc_58217_49484560();
   scope->scopes[4] = makewinc_58221_49482780();
   scope->scopes[5] = makerdec_58225_49480240();
   scope->scopes[6] = makewdec_58230_49501980();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61176080();
   scope->behaviors[1] = make__61175880();
   scope->behaviors[2] = make__61175400();
   scope->behaviors[3] = make__61175060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58235_52104660;

SignalI lv0_52212540_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelv0_52212540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52212540_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

SignalI lv1_52386660_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelv1_52386660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_52386660_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

SignalI rv0_52445480_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makerv0_52445480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52445480_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

SignalI rv1_52586380_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makerv1_52586380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52586380_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

SignalI lvok0_52586360_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelvok0_52586360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52586360_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

SignalI lvok1_52586340_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelvok1_52586340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52586340_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

SignalI rvok0_52586320_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makervok0_52586320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52586320_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

SignalI rvok1_52586300_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makervok1_52586300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52586300_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

SignalI run_52586280_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makerun_52586280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52586280_add__n_58235_52104660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58235_52104660;
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

Behavior __48987360;

Behavior make__48987360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48987360 = behavior;
   behavior->owner = (Object)add__n_58235_52104660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos = realloc(clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos[clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__52586160();

   return behavior;
}

Scope makeadd__n_58235_52104660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58235_52104660 = scope;
   scope->owner = (Object)layer0_58_84_48639220;
   scope->name = "add_n:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52212540();
   scope->inners[1] = makelv1_52386660();
   scope->inners[2] = makerv0_52445480();
   scope->inners[3] = makerv1_52586380();
   scope->inners[4] = makelvok0_52586360();
   scope->inners[5] = makelvok1_52586340();
   scope->inners[6] = makervok0_52586320();
   scope->inners[7] = makervok1_52586300();
   scope->inners[8] = makerun_52586280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48987360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52936100;

Behavior make__52936100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52936100 = behavior;
   behavior->owner = (Object)layer0_58_84_48639220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos = realloc(clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos[clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__52126780();

   return behavior;
}

Behavior __54094240;

Behavior make__54094240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54094240 = behavior;
   behavior->owner = (Object)layer0_58_84_48639220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos = realloc(clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos[clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__52935920();

   return behavior;
}

Behavior __52103080;

Behavior make__52103080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52103080 = behavior;
   behavior->owner = (Object)layer0_58_84_48639220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos = realloc(clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->pos[clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__54094100();

   return behavior;
}

Behavior __61035860;

Behavior make__61035860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61035860 = behavior;
   behavior->owner = (Object)layer0_58_84_48639220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[value__z0_52166260_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[value__z1_52371280_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[ack__a00_52551900_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[ack__a01_52551880_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60982540();

   return behavior;
}

Behavior __61035700;

Behavior make__61035700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61035700 = behavior;
   behavior->owner = (Object)layer0_58_84_48639220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60982480();

   return behavior;
}

Scope makelayer0_58_84_48639220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_48639220 = scope;
   scope->owner = (Object)layer0_58_840_52102580;
   scope->name = "layer0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_45220940();
   scope->systemIs[1] = makefunc1_47249060();
   scope->num_inners = 32;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac0_48987200();
   scope->inners[1] = makeack__mac1_48987160();
   scope->inners[2] = makeack__add_48987140();
   scope->inners[3] = make_5897_49133320();
   scope->inners[4] = make_5895_49133300();
   scope->inners[5] = make_5896_49133160();
   scope->inners[6] = make_58126_49344080();
   scope->inners[7] = make_58124_49344060();
   scope->inners[8] = make_58125_49343060();
   scope->inners[9] = make_58143_49569360();
   scope->inners[10] = make_58144_51215260();
   scope->inners[11] = make_58177_51640580();
   scope->inners[12] = make_58178_51763860();
   scope->inners[13] = make_58207_52009960();
   scope->inners[14] = make_58208_52076080();
   scope->inners[15] = makevalue__z0_52166260();
   scope->inners[16] = makevalue__z1_52371280();
   scope->inners[17] = makevalue__a00_52429060();
   scope->inners[18] = makevalue__a01_52551960();
   scope->inners[19] = makeflag__z0_52551940();
   scope->inners[20] = makeflag__z1_52551920();
   scope->inners[21] = makeack__a00_52551900();
   scope->inners[22] = makeack__a01_52551880();
   scope->inners[23] = make_5899_52551860();
   scope->inners[24] = make_58100_52551760();
   scope->inners[25] = make_58101_52671240();
   scope->inners[26] = make_58128_52671220();
   scope->inners[27] = make_58129_52671120();
   scope->inners[28] = make_58130_52768800();
   scope->inners[29] = make_58192_52900180();
   scope->inners[30] = make_58193_53063640();
   scope->inners[31] = make_58194_53063540();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_48638880();
   scope->scopes[1] = makechannel__w1_58112_48642440();
   scope->scopes[2] = makechannel__accum_58141_47431080();
   scope->scopes[3] = makemac__n1_58173_45580820();
   scope->scopes[4] = makemac__n1_58174_53990700();
   scope->scopes[5] = makechannel__bias_58175_53944540();
   scope->scopes[6] = makechannel__z_58205_49487460();
   scope->scopes[7] = makeadd__n_58235_52104660();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52936100();
   scope->behaviors[1] = make__54094240();
   scope->behaviors[2] = make__52103080();
   scope->behaviors[3] = make__61035860();
   scope->behaviors[4] = make__61035700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_52102580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_52102580 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52148200();
   systemT->inputs[1] = makerst_52148180();
   systemT->inputs[2] = makefill_52148160();
   systemT->inputs[3] = makereq_52148140();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_52148080();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer0_58_84_48639220();

   return systemT;
}