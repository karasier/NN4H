#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_47468160;

Block __47293120;

Block __47627900;

void code__47627900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47293560_mem0_580_47296780______58_84_47297140______58_840_47468160->c_value,make_ref_rangeS(mem_47293240_mem0_580_47296780______58_84_47297140______58_840_47468160,value2integer(abus__w_47293400_mem0_580_47296780______58_84_47297140______58_840_47468160->c_value),value2integer(abus__w_47293400_mem0_580_47296780______58_84_47297140______58_840_47468160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47627900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47627900 = block;
   block->owner = (Object)__47293120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47627900;

   return block;
};

void code__47293120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47293240_mem0_580_47296780______58_84_47297140______58_840_47468160->c_value;
            idx = value2integer(abus__r_47293480_mem0_580_47296780______58_84_47297140______58_840_47468160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47293640_mem0_580_47296780______58_84_47297140______58_840_47468160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47293760_mem0_580_47296780______58_84_47297140______58_840_47468160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47627900();
   }
      }
   }
}

Block make__47293120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47293120 = block;
   block->owner = (Object)__47626120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47293120;

   return block;
};

Block __47471200;

Block __47470180;

void code__47470180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47471780_mem1_5829_47626000______58_84_47297140______58_840_47468160->c_value,make_ref_rangeS(mem_47471340_mem1_5829_47626000______58_84_47297140______58_840_47468160,value2integer(abus__w_47471540_mem1_5829_47626000______58_84_47297140______58_840_47468160->c_value),value2integer(abus__w_47471540_mem1_5829_47626000______58_84_47297140______58_840_47468160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47470180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47470180 = block;
   block->owner = (Object)__47471200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47470180;

   return block;
};

void code__47471200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47471340_mem1_5829_47626000______58_84_47297140______58_840_47468160->c_value;
            idx = value2integer(abus__r_47471660_mem1_5829_47626000______58_84_47297140______58_840_47468160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47471880_mem1_5829_47626000______58_84_47297140______58_840_47468160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47471960_mem1_5829_47626000______58_84_47297140______58_840_47468160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47470180();
   }
      }
   }
}

Block make__47471200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47471200 = block;
   block->owner = (Object)__47468800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47471200;

   return block;
};

Scope _____58_84_47297140;

SignalI clk_47468640______58_84_47297140______58_840_47468160;

SignalI makeclk_47468640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47468640______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)_____58_84_47297140;
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

SignalI rst_47468620______58_84_47297140______58_840_47468160;

SignalI makerst_47468620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47468620______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)_____58_84_47297140;
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

SignalI req_47468580______58_84_47297140______58_840_47468160;

SignalI makereq_47468580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_47468580______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)_____58_84_47297140;
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

SignalI _58ack00_47468560______58_84_47297140______58_840_47468160;

SignalI make_58ack00_47468560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58ack00_47468560______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)_____58_84_47297140;
   signalI->name = ":ack00";
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

SignalI _58ack01_47468540______58_84_47297140______58_840_47468160;

SignalI make_58ack01_47468540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58ack01_47468540______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)_____58_84_47297140;
   signalI->name = ":ack01";
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

Scope mem0_580_47296780;

SignalI trig__r_47293800_mem0_580_47296780______58_84_47297140______58_840_47468160;

SignalI maketrig__r_47293800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47293800_mem0_580_47296780______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem0_580_47296780;
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

SignalI trig__w_47293760_mem0_580_47296780______58_84_47297140______58_840_47468160;

SignalI maketrig__w_47293760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47293760_mem0_580_47296780______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem0_580_47296780;
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

SignalI dbus__r_47293640_mem0_580_47296780______58_84_47297140______58_840_47468160;

SignalI makedbus__r_47293640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47293640_mem0_580_47296780______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem0_580_47296780;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_47293560_mem0_580_47296780______58_84_47297140______58_840_47468160;

SignalI makedbus__w_47293560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47293560_mem0_580_47296780______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem0_580_47296780;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_47293480_mem0_580_47296780______58_84_47297140______58_840_47468160;

SignalI makeabus__r_47293480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47293480_mem0_580_47296780______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem0_580_47296780;
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

SignalI abus__w_47293400_mem0_580_47296780______58_84_47297140______58_840_47468160;

SignalI makeabus__w_47293400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47293400_mem0_580_47296780______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem0_580_47296780;
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

SignalI mem_47293240_mem0_580_47296780______58_84_47297140______58_840_47468160;

SignalI makemem_47293240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47293240_mem0_580_47296780______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem0_580_47296780;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_581_47296460;

Scope makeraddr_581_47296460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_581_47296460 = scope;
   scope->owner = (Object)mem0_580_47296780;
   scope->name = "raddr:1";
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

Scope waddr_586_47296020;

Scope makewaddr_586_47296020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_586_47296020 = scope;
   scope->owner = (Object)mem0_580_47296780;
   scope->name = "waddr:6";
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

Scope rinc_5811_47295600;

Scope makerinc_5811_47295600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5811_47295600 = scope;
   scope->owner = (Object)mem0_580_47296780;
   scope->name = "rinc:11";
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

Scope winc_5815_47295160;

Scope makewinc_5815_47295160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5815_47295160 = scope;
   scope->owner = (Object)mem0_580_47296780;
   scope->name = "winc:15";
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

Scope rdec_5819_47294680;

Scope makerdec_5819_47294680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5819_47294680 = scope;
   scope->owner = (Object)mem0_580_47296780;
   scope->name = "rdec:19";
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

Scope wdec_5824_47294240;

Scope makewdec_5824_47294240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5824_47294240 = scope;
   scope->owner = (Object)mem0_580_47296780;
   scope->name = "wdec:24";
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

Behavior __47626120;

Behavior make__47626120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47626120 = behavior;
   behavior->owner = (Object)mem0_580_47296780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47468640______58_84_47297140______58_840_47468160);
   clk_47468640______58_84_47297140______58_840_47468160->num_neg += 1;
   clk_47468640______58_84_47297140______58_840_47468160->neg = realloc(clk_47468640______58_84_47297140______58_840_47468160->neg,clk_47468640______58_84_47297140______58_840_47468160->num_neg*sizeof(Object));
clk_47468640______58_84_47297140______58_840_47468160->neg[clk_47468640______58_84_47297140______58_840_47468160->num_neg-1] = (Object)behavior;
   behavior->block = make__47293120();

   return behavior;
}

Scope makemem0_580_47296780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mem0_580_47296780 = scope;
   scope->owner = (Object)_____58_84_47297140;
   scope->name = "mem0:0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47293800();
   scope->inners[1] = maketrig__w_47293760();
   scope->inners[2] = makedbus__r_47293640();
   scope->inners[3] = makedbus__w_47293560();
   scope->inners[4] = makeabus__r_47293480();
   scope->inners[5] = makeabus__w_47293400();
   scope->inners[6] = makemem_47293240();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_581_47296460();
   scope->scopes[1] = makewaddr_586_47296020();
   scope->scopes[2] = makerinc_5811_47295600();
   scope->scopes[3] = makewinc_5815_47295160();
   scope->scopes[4] = makerdec_5819_47294680();
   scope->scopes[5] = makewdec_5824_47294240();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47626120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mem1_5829_47626000;

SignalI trig__r_47471980_mem1_5829_47626000______58_84_47297140______58_840_47468160;

SignalI maketrig__r_47471980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47471980_mem1_5829_47626000______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem1_5829_47626000;
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

SignalI trig__w_47471960_mem1_5829_47626000______58_84_47297140______58_840_47468160;

SignalI maketrig__w_47471960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47471960_mem1_5829_47626000______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem1_5829_47626000;
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

SignalI dbus__r_47471880_mem1_5829_47626000______58_84_47297140______58_840_47468160;

SignalI makedbus__r_47471880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47471880_mem1_5829_47626000______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem1_5829_47626000;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_47471780_mem1_5829_47626000______58_84_47297140______58_840_47468160;

SignalI makedbus__w_47471780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47471780_mem1_5829_47626000______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem1_5829_47626000;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_47471660_mem1_5829_47626000______58_84_47297140______58_840_47468160;

SignalI makeabus__r_47471660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47471660_mem1_5829_47626000______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem1_5829_47626000;
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

SignalI abus__w_47471540_mem1_5829_47626000______58_84_47297140______58_840_47468160;

SignalI makeabus__w_47471540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47471540_mem1_5829_47626000______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem1_5829_47626000;
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

SignalI mem_47471340_mem1_5829_47626000______58_84_47297140______58_840_47468160;

SignalI makemem_47471340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47471340_mem1_5829_47626000______58_84_47297140______58_840_47468160 = signalI;
   signalI->owner = (Object)mem1_5829_47626000;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_5830_47625640;

Scope makeraddr_5830_47625640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5830_47625640 = scope;
   scope->owner = (Object)mem1_5829_47626000;
   scope->name = "raddr:30";
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

Scope waddr_5835_47625160;

Scope makewaddr_5835_47625160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5835_47625160 = scope;
   scope->owner = (Object)mem1_5829_47626000;
   scope->name = "waddr:35";
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

Scope rinc_5840_47624600;

Scope makerinc_5840_47624600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5840_47624600 = scope;
   scope->owner = (Object)mem1_5829_47626000;
   scope->name = "rinc:40";
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

Scope winc_5844_47624040;

Scope makewinc_5844_47624040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5844_47624040 = scope;
   scope->owner = (Object)mem1_5829_47626000;
   scope->name = "winc:44";
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

Scope rdec_5848_47623520;

Scope makerdec_5848_47623520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5848_47623520 = scope;
   scope->owner = (Object)mem1_5829_47626000;
   scope->name = "rdec:48";
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

Scope wdec_5853_47472520;

Scope makewdec_5853_47472520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5853_47472520 = scope;
   scope->owner = (Object)mem1_5829_47626000;
   scope->name = "wdec:53";
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

Behavior __47468800;

Behavior make__47468800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47468800 = behavior;
   behavior->owner = (Object)mem1_5829_47626000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47468640______58_84_47297140______58_840_47468160);
   clk_47468640______58_84_47297140______58_840_47468160->num_neg += 1;
   clk_47468640______58_84_47297140______58_840_47468160->neg = realloc(clk_47468640______58_84_47297140______58_840_47468160->neg,clk_47468640______58_84_47297140______58_840_47468160->num_neg*sizeof(Object));
clk_47468640______58_84_47297140______58_840_47468160->neg[clk_47468640______58_84_47297140______58_840_47468160->num_neg-1] = (Object)behavior;
   behavior->block = make__47471200();

   return behavior;
}

Scope makemem1_5829_47626000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mem1_5829_47626000 = scope;
   scope->owner = (Object)_____58_84_47297140;
   scope->name = "mem1:29";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47471980();
   scope->inners[1] = maketrig__w_47471960();
   scope->inners[2] = makedbus__r_47471880();
   scope->inners[3] = makedbus__w_47471780();
   scope->inners[4] = makeabus__r_47471660();
   scope->inners[5] = makeabus__w_47471540();
   scope->inners[6] = makemem_47471340();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5830_47625640();
   scope->scopes[1] = makewaddr_5835_47625160();
   scope->scopes[2] = makerinc_5840_47624600();
   scope->scopes[3] = makewinc_5844_47624040();
   scope->scopes[4] = makerdec_5848_47623520();
   scope->scopes[5] = makewdec_5853_47472520();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47468800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope make_____58_84_47297140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_47297140 = scope;
   scope->owner = (Object)_____58_840_47468160;
   scope->name = "__:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_47468640();
   scope->inners[1] = makerst_47468620();
   scope->inners[2] = makereq_47468580();
   scope->inners[3] = make_58ack00_47468560();
   scope->inners[4] = make_58ack01_47468540();
   scope->num_scopes = 2;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makemem0_580_47296780();
   scope->scopes[1] = makemem1_5829_47626000();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_47468160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_47468160 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_47297140();

   return systemT;
}