#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT nn__simulator_58_840_54825200;

SignalI clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeclk_54821240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_54825200;
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

SignalI rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerst_54821220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_54825200;
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

SignalI req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereq_54821180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_54825200;
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

SignalI fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makefill_54821160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_54825200;
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

SignalI ack__fill_54821120_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__fill_54821120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_54821120_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_54825200;
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

SignalI ack__network_54821060_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__network_54821060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_54821060_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)nn__simulator_58_840_54825200;
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

Block __55408040;

void code__55408040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack__fill_54821120_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack__network_54821060_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55408040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55408040 = block;
   block->owner = (Object)__55436060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55408040;

   return block;
};

Block __47750060;

void code__47750060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47750180_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_46599500_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__47750060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47750060 = block;
   block->owner = (Object)__49086020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47750060;

   return block;
};

Block __55459760;

void code__55459760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5810_54538720_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55459760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55459760 = block;
   block->owner = (Object)__55469520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55459760;

   return block;
};

Block __55459700;

void code__55459700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__r_46356440_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_46599500_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55459700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55459700 = block;
   block->owner = (Object)__55469300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55459700;

   return block;
};

Block __49593200;

Block __49792460;

void code__49792460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49507620_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,make_ref_rangeS(mem_49593320_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860,value2integer(abus__w_49507460_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value),value2integer(abus__w_49507460_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49792460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49792460 = block;
   block->owner = (Object)__49593200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49792460;

   return block;
};

void code__49593200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49593320_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_49507540_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49429640_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49261240_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49792460();
   }
      }
   }
}

Block make__49593200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49593200 = block;
   block->owner = (Object)__45557340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49593200;

   return block;
};

Block __55491720;

void code__55491720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__w_49261240_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__w_49507460_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,dbus__w_49507620_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55491720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55491720 = block;
   block->owner = (Object)__55555320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55491720;

   return block;
};

Value make__55569880() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55569840() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope nn__simulator_58_84_44079220;

SystemI neural__network_54828300;

SystemI makeneural__network_54828300() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   neural__network_54828300 = systemI;
   systemI->owner = (Object)nn__simulator_58_84_44079220;
   systemI->name = "neural_network";
   systemI->system = neural__network_58_840_54314100;

   return systemI;
};

Scope rom__inputs_581_44077740;

SignalI trig__r_46356440_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_46356440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_46356440_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rom__inputs_581_44077740;
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

SignalI dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_46602820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rom__inputs_581_44077740;
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

SignalI abus__r_46599500_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_46599500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46599500_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rom__inputs_581_44077740;
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

SignalI mem_47750180_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_47750180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47750180_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rom__inputs_581_44077740;
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
         src0 = make__55569880();
         src1 = make__55569840();
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

Scope raddr_582_44075480;

Scope makeraddr_582_44075480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_44075480 = scope;
   scope->owner = (Object)rom__inputs_581_44077740;
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

Scope rinc_587_44095900;

Behavior __55469520;

Behavior make__55469520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55469520 = behavior;
   behavior->owner = (Object)rinc_587_44095900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__r_46602820_rom__inputs_581_44077740_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55459760();

   return behavior;
}

Behavior __55469300;

Behavior make__55469300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55469300 = behavior;
   behavior->owner = (Object)rinc_587_44095900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55459700();

   return behavior;
}

Scope makerinc_587_44095900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_587_44095900 = scope;
   scope->owner = (Object)rom__inputs_581_44077740;
   scope->name = "rinc:7";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55469520();
   scope->behaviors[1] = make__55469300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5811_46357060;

Scope makerdec_5811_46357060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5811_46357060 = scope;
   scope->owner = (Object)rom__inputs_581_44077740;
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

Behavior __49086020;

Behavior make__49086020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49086020 = behavior;
   behavior->owner = (Object)rom__inputs_581_44077740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__47750060();

   return behavior;
}

Scope makerom__inputs_581_44077740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rom__inputs_581_44077740 = scope;
   scope->owner = (Object)nn__simulator_58_84_44079220;
   scope->name = "rom_inputs:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_46356440();
   scope->inners[1] = makedbus__r_46602820();
   scope->inners[2] = makeabus__r_46599500();
   scope->inners[3] = makemem_47750180();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_44075480();
   scope->scopes[1] = makerinc_587_44095900();
   scope->scopes[2] = makerdec_5811_46357060();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49086020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope ram__outputs_5816_49085900;

SignalI trig__r_49261380_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_49261380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49261380_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)ram__outputs_5816_49085900;
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

SignalI trig__w_49261240_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__w_49261240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49261240_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)ram__outputs_5816_49085900;
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

SignalI dbus__r_49429640_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_49429640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49429640_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)ram__outputs_5816_49085900;
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

SignalI dbus__w_49507620_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__w_49507620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49507620_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)ram__outputs_5816_49085900;
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

SignalI abus__r_49507540_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_49507540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49507540_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)ram__outputs_5816_49085900;
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

SignalI abus__w_49507460_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_49507460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49507460_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)ram__outputs_5816_49085900;
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

SignalI mem_49593320_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_49593320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49593320_ram__outputs_5816_49085900_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)ram__outputs_5816_49085900;
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

Scope raddr_5817_49085600;

Scope makeraddr_5817_49085600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5817_49085600 = scope;
   scope->owner = (Object)ram__outputs_5816_49085900;
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

Scope waddr_5822_49085180;

Scope makewaddr_5822_49085180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5822_49085180 = scope;
   scope->owner = (Object)ram__outputs_5816_49085900;
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

Scope rinc_5827_49084760;

Scope makerinc_5827_49084760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5827_49084760 = scope;
   scope->owner = (Object)ram__outputs_5816_49085900;
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

Scope winc_5831_49084340;

Behavior __55555320;

Behavior make__55555320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55555320 = behavior;
   behavior->owner = (Object)winc_5831_49084340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,_5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55491720();

   return behavior;
}

Scope makewinc_5831_49084340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5831_49084340 = scope;
   scope->owner = (Object)ram__outputs_5816_49085900;
   scope->name = "winc:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55555320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5835_49242540;

Scope makerdec_5835_49242540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5835_49242540 = scope;
   scope->owner = (Object)ram__outputs_5816_49085900;
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

Scope wdec_5840_49264080;

Scope makewdec_5840_49264080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5840_49264080 = scope;
   scope->owner = (Object)ram__outputs_5816_49085900;
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

Behavior __45557340;

Behavior make__45557340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45557340 = behavior;
   behavior->owner = (Object)ram__outputs_5816_49085900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__49593200();

   return behavior;
}

Scope makeram__outputs_5816_49085900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   ram__outputs_5816_49085900 = scope;
   scope->owner = (Object)nn__simulator_58_84_44079220;
   scope->name = "ram_outputs:16";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49261380();
   scope->inners[1] = maketrig__w_49261240();
   scope->inners[2] = makedbus__r_49429640();
   scope->inners[3] = makedbus__w_49507620();
   scope->inners[4] = makeabus__r_49507540();
   scope->inners[5] = makeabus__w_49507460();
   scope->inners[6] = makemem_49593320();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5817_49085600();
   scope->scopes[1] = makewaddr_5822_49085180();
   scope->scopes[2] = makerinc_5827_49084760();
   scope->scopes[3] = makewinc_5831_49084340();
   scope->scopes[4] = makerdec_5835_49242540();
   scope->scopes[5] = makewdec_5840_49264080();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45557340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55436060;

Behavior make__55436060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55436060 = behavior;
   behavior->owner = (Object)nn__simulator_58_84_44079220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[clk_54821240_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[rst_54821220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[req_54821180_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[fill_54821160_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55408040();

   return behavior;
}

Scope makenn__simulator_58_84_44079220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   nn__simulator_58_84_44079220 = scope;
   scope->owner = (Object)nn__simulator_58_840_54825200;
   scope->name = "nn_simulator:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makeneural__network_54828300();
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 2;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makerom__inputs_581_44077740();
   scope->scopes[1] = makeram__outputs_5816_49085900();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55436060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makenn__simulator_58_840_54825200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   nn__simulator_58_840_54825200 = systemT;
systemT->owner = NULL;
   systemT->name = "nn_simulator:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54821240();
   systemT->inputs[1] = makerst_54821220();
   systemT->inputs[2] = makereq_54821180();
   systemT->inputs[3] = makefill_54821160();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_54821120();
   systemT->outputs[1] = makeack__network_54821060();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makenn__simulator_58_84_44079220();

   return systemT;
}