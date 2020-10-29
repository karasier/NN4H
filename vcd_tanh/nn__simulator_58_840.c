#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT nn__simulator_58_840_48486120;

SignalI clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeclk_48565760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_48486120;
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

SignalI rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerst_48565740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_48486120;
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

SignalI req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereq_48565720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_48486120;
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

SignalI fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makefill_48565660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_48486120;
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

SignalI ack__fill_48565500_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__fill_48565500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_48565500_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_48486120;
   signalI->name = "ack_fill";
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

SignalI ack__network_48565480_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__network_48565480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_48565480_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_48486120;
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

Block __50692440;

void code__50692440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,clk_57587800_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rst_57587780_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,req_57587760_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,fill_57587740_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__fill_41816620_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,ack__fill_48565500_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__network_41874280_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,ack__network_48565480_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50692440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50692440 = block;
   block->owner = (Object)__50980720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50692440;

   return block;
};

Block __48155980;

void code__48155980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48156100_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            idx = value2integer(abus__r_51136440_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48155980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48155980 = block;
   block->owner = (Object)__48631200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48155980;

   return block;
};

Block __51076300;

void code__51076300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_5810_41470400_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51076300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51076300 = block;
   block->owner = (Object)__51135060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51076300;

   return block;
};

Block __51075800;

void code__51075800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_588_41871320_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,trig__r_51071540_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_589_42000680_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,abus__r_51136440_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51075800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51075800 = block;
   block->owner = (Object)__51134640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51075800;

   return block;
};

Block __50082900;

Block __50399800;

void code__50399800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50014620_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,make_ref_rangeS(mem_50083020_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140,value2integer(abus__w_50014460_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value),value2integer(abus__w_50014460_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50399800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50399800 = block;
   block->owner = (Object)__50082900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50399800;

   return block;
};

void code__50082900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50083020_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            idx = value2integer(abus__r_50014540_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49869060_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49789300_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50399800();
   }
      }
   }
}

Block make__50082900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50082900 = block;
   block->owner = (Object)__50633000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50082900;

   return block;
};

Block __54590120;

void code__54590120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_42000660_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,trig__w_49789300_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_43090300_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,abus__w_50014460_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5834_48436840_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,dbus__w_50014620_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__54590120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54590120 = block;
   block->owner = (Object)__54651540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54590120;

   return block;
};

Value make__54698280() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54698260() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope nn__simulator_58_84_50758280;

SystemI neural__network_48436660;

SystemI makeneural__network_48436660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   neural__network_48436660 = systemI;
   systemI->owner = (Object)nn__simulator_58_84_50758280;
   systemI->name = "neural_network";
   systemI->system = neural__network_58_840_57566280;

   return systemI;
};

Scope rom__inputs_581_50757840;

SignalI trig__r_51071540_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__r_51071540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51071540_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rom__inputs_581_50757840;
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

SignalI dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__r_51136520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rom__inputs_581_50757840;
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

SignalI abus__r_51136440_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_51136440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51136440_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rom__inputs_581_50757840;
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

SignalI mem_48156100_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makemem_48156100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48156100_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rom__inputs_581_50757840;
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
         src0 = make__54698280();
         src1 = make__54698260();
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

Scope raddr_582_50782060;

Scope makeraddr_582_50782060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_50782060 = scope;
   scope->owner = (Object)rom__inputs_581_50757840;
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

Scope rinc_587_50781460;

Behavior __51135060;

Behavior make__51135060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51135060 = behavior;
   behavior->owner = (Object)rinc_587_50781460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[dbus__r_51136520_rom__inputs_581_50757840_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__51076300();

   return behavior;
}

Behavior __51134640;

Behavior make__51134640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51134640 = behavior;
   behavior->owner = (Object)rinc_587_50781460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_588_41871320_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _588_41871320_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _588_41871320_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_588_41871320_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_588_41871320_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_588_41871320_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_588_41871320_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_589_42000680_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _589_42000680_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _589_42000680_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_589_42000680_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_589_42000680_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_589_42000680_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_589_42000680_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__51075800();

   return behavior;
}

Scope makerinc_587_50781460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_587_50781460 = scope;
   scope->owner = (Object)rom__inputs_581_50757840;
   scope->name = "rinc:7";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51135060();
   scope->behaviors[1] = make__51134640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5811_51071980;

Scope makerdec_5811_51071980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5811_51071980 = scope;
   scope->owner = (Object)rom__inputs_581_50757840;
   scope->name = "rdec:11";
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

Behavior __48631200;

Behavior make__48631200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48631200 = behavior;
   behavior->owner = (Object)rom__inputs_581_50757840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__48155980();

   return behavior;
}

Scope makerom__inputs_581_50757840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rom__inputs_581_50757840 = scope;
   scope->owner = (Object)nn__simulator_58_84_50758280;
   scope->name = "rom_inputs:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51071540();
   scope->inners[1] = makedbus__r_51136520();
   scope->inners[2] = makeabus__r_51136440();
   scope->inners[3] = makemem_48156100();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_50782060();
   scope->scopes[1] = makerinc_587_50781460();
   scope->scopes[2] = makerdec_5811_51071980();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48631200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope ram__outputs_5816_48631060;

SignalI trig__r_49789380_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__r_49789380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49789380_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)ram__outputs_5816_48631060;
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

SignalI trig__w_49789300_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__w_49789300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49789300_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)ram__outputs_5816_48631060;
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

SignalI dbus__r_49869060_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__r_49869060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49869060_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)ram__outputs_5816_48631060;
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

SignalI dbus__w_50014620_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__w_50014620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50014620_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)ram__outputs_5816_48631060;
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

SignalI abus__r_50014540_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_50014540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50014540_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)ram__outputs_5816_48631060;
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

SignalI abus__w_50014460_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_50014460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50014460_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)ram__outputs_5816_48631060;
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

SignalI mem_50083020_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makemem_50083020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50083020_ram__outputs_5816_48631060_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)ram__outputs_5816_48631060;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_5817_48629320;

Scope makeraddr_5817_48629320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5817_48629320 = scope;
   scope->owner = (Object)ram__outputs_5816_48631060;
   scope->name = "raddr:17";
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

Scope waddr_5822_48646520;

Scope makewaddr_5822_48646520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5822_48646520 = scope;
   scope->owner = (Object)ram__outputs_5816_48631060;
   scope->name = "waddr:22";
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

Scope rinc_5827_48645640;

Scope makerinc_5827_48645640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5827_48645640 = scope;
   scope->owner = (Object)ram__outputs_5816_48631060;
   scope->name = "rinc:27";
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

Scope winc_5831_48645020;

Behavior __54651540;

Behavior make__54651540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54651540 = behavior;
   behavior->owner = (Object)winc_5831_48645020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_42000660_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _5832_42000660_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _5832_42000660_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_5832_42000660_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_5832_42000660_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_5832_42000660_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_5832_42000660_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5833_43090300_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _5833_43090300_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _5833_43090300_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_5833_43090300_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_5833_43090300_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_5833_43090300_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_5833_43090300_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,_5834_48436840_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _5834_48436840_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _5834_48436840_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_5834_48436840_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_5834_48436840_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_5834_48436840_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_5834_48436840_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__54590120();

   return behavior;
}

Scope makewinc_5831_48645020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5831_48645020 = scope;
   scope->owner = (Object)ram__outputs_5816_48631060;
   scope->name = "winc:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54651540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5835_49790820;

Scope makerdec_5835_49790820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5835_49790820 = scope;
   scope->owner = (Object)ram__outputs_5816_48631060;
   scope->name = "rdec:35";
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

Scope wdec_5840_49790180;

Scope makewdec_5840_49790180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5840_49790180 = scope;
   scope->owner = (Object)ram__outputs_5816_48631060;
   scope->name = "wdec:40";
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

Behavior __50633000;

Behavior make__50633000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50633000 = behavior;
   behavior->owner = (Object)ram__outputs_5816_48631060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__50082900();

   return behavior;
}

Scope makeram__outputs_5816_48631060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   ram__outputs_5816_48631060 = scope;
   scope->owner = (Object)nn__simulator_58_84_50758280;
   scope->name = "ram_outputs:16";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49789380();
   scope->inners[1] = maketrig__w_49789300();
   scope->inners[2] = makedbus__r_49869060();
   scope->inners[3] = makedbus__w_50014620();
   scope->inners[4] = makeabus__r_50014540();
   scope->inners[5] = makeabus__w_50014460();
   scope->inners[6] = makemem_50083020();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5817_48629320();
   scope->scopes[1] = makewaddr_5822_48646520();
   scope->scopes[2] = makerinc_5827_48645640();
   scope->scopes[3] = makewinc_5831_48645020();
   scope->scopes[4] = makerdec_5835_49790820();
   scope->scopes[5] = makewdec_5840_49790180();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50633000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50980720;

Behavior make__50980720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50980720 = behavior;
   behavior->owner = (Object)nn__simulator_58_84_50758280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[clk_48565760_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[rst_48565740_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[req_48565720_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[fill_48565660_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__fill_41816620_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__fill_41816620_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__fill_41816620_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__fill_41816620_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__fill_41816620_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__fill_41816620_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__fill_41816620_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__network_41874280_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__network_41874280_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__network_41874280_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__network_41874280_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__network_41874280_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__network_41874280_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__network_41874280_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__50692440();

   return behavior;
}

Scope makenn__simulator_58_84_50758280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   nn__simulator_58_84_50758280 = scope;
   scope->owner = (Object)nn__simulator_58_840_48486120;
   scope->name = "nn_simulator:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makeneural__network_48436660();
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 2;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makerom__inputs_581_50757840();
   scope->scopes[1] = makeram__outputs_5816_48631060();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50980720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makenn__simulator_58_840_48486120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   nn__simulator_58_840_48486120 = systemT;
systemT->owner = NULL;
   systemT->name = "nn_simulator:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_48565760();
   systemT->inputs[1] = makerst_48565740();
   systemT->inputs[2] = makereq_48565720();
   systemT->inputs[3] = makefill_48565660();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_48565500();
   systemT->outputs[1] = makeack__network_48565480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makenn__simulator_58_84_50758280();

   return systemT;
}