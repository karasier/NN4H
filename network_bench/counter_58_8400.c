#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_52487960;

SignalI clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeclk_52557640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)counter_58_8400_52487960;
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

SignalI ack_52557540_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack_52557540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52557540_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)counter_58_8400_52487960;
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

SignalI rst_52557420_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makerst_52557420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52557420_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)counter_58_8400_52487960;
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

SignalI ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__mac_52557140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)counter_58_8400_52487960;
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

Block __52457620;

Block __52457200;

void code__52457200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58894840(),q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58894780(),ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__52457200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52457200 = block;
   block->owner = (Object)__52457620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52457200;

   return block;
};

Block __52455580;

void code__52455580() {
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
                  src0 = q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58894240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__52455580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52455580 = block;
   block->owner = (Object)__52457620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52455580;

   return block;
};

void code__52457620() {
   {
      Value cond = rst_52557420_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52457200();
   }
   else if (value2integer(ack_52557540_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value)) {
  code__52455580();
   }
      }
   }
}

Block make__52457620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52457620 = block;
   block->owner = (Object)__52453680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52457620;

   return block;
};

Block __52453480;

Block __52493420;

void code__52493420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58892980(),q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__52493420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52493420 = block;
   block->owner = (Object)__52453480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52493420;

   return block;
};

void code__52453480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58893480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52493420();
   }
      }
   }
}

Block make__52453480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52453480 = block;
   block->owner = (Object)__52491480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52453480;

   return block;
};

Block __52491260;

Block __52490400;

void code__52490400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58892820(),ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__52490400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52490400 = block;
   block->owner = (Object)__52491260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52490400;

   return block;
};

void code__52491260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58892900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52490400();
   }
      }
   }
}

Block make__52491260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52491260 = block;
   block->owner = (Object)__52488640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52491260;

   return block;
};

Value make__58894840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58894780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58894240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58893480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58892980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58892900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58892820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_52458860;

SignalI q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeq_52457760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)counter_58_840_52458860;
   signalI->name = "q";
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

Behavior __52453680;

Behavior make__52453680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52453680 = behavior;
   behavior->owner = (Object)counter_58_840_52458860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__52457620();

   return behavior;
}

Behavior __52491480;

Behavior make__52491480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52491480 = behavior;
   behavior->owner = (Object)counter_58_840_52458860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg += 1;
   clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg = realloc(clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg,clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg*sizeof(Object));
clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg[clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg-1] = (Object)behavior;
   behavior->block = make__52453480();

   return behavior;
}

Behavior __52488640;

Behavior make__52488640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52488640 = behavior;
   behavior->owner = (Object)counter_58_840_52458860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[q_52457760_counter_58_840_52458860_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__52491260();

   return behavior;
}

Scope makecounter_58_840_52458860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_52458860 = scope;
   scope->owner = (Object)counter_58_8400_52487960;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_52457760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52453680();
   scope->behaviors[1] = make__52491480();
   scope->behaviors[2] = make__52488640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_52487960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_52487960 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52557640();
   systemT->inputs[1] = makeack_52557540();
   systemT->inputs[2] = makerst_52557420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_52557140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_52458860();

   return systemT;
}