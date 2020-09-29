#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_47311720;

SignalI clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeclk_47345840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_841_47311720;
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

SignalI ack_47345680_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack_47345680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_47345680_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_841_47311720;
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

SignalI rst_47344780_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerst_47344780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47344780_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_841_47311720;
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

SignalI ack__mac_47344260_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__mac_47344260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47344260_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_841_47311720;
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

Block __46701000;

Block __46699720;

void code__46699720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83861660(),q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83861580(),ack__mac_47344260_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__46699720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46699720 = block;
   block->owner = (Object)__46701000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46699720;

   return block;
};

Block __46695400;

void code__46695400() {
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
                  src0 = q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__83885820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__46695400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46695400 = block;
   block->owner = (Object)__46701000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46695400;

   return block;
};

void code__46701000() {
   {
      Value cond = rst_47344780_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46699720();
   }
   else if (value2integer(ack_47345680_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value)) {
  code__46695400();
   }
      }
   }
}

Block make__46701000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46701000 = block;
   block->owner = (Object)__46927680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46701000;

   return block;
};

Block __46927240;

Block __46973920;

void code__46973920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83885500(),q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__46973920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46973920 = block;
   block->owner = (Object)__46927240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46973920;

   return block;
};

void code__46927240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__83885600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46973920();
   }
      }
   }
}

Block make__46927240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46927240 = block;
   block->owner = (Object)__47006200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46927240;

   return block;
};

Block __47005740;

Block __47029520;

void code__47029520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83885160(),ack__mac_47344260_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__47029520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47029520 = block;
   block->owner = (Object)__47005740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47029520;

   return block;
};

void code__47005740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__83885280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47029520();
   }
      }
   }
}

Block make__47005740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47005740 = block;
   block->owner = (Object)__47315240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47005740;

   return block;
};

Value make__83861660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__83861580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__83885820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__83885600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__83885500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__83885280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__83885160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_46306100;

SignalI q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeq_46679040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_84_46306100;
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

Behavior __46927680;

Behavior make__46927680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46927680 = behavior;
   behavior->owner = (Object)counter_58_84_46306100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__46701000();

   return behavior;
}

Behavior __47006200;

Behavior make__47006200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47006200 = behavior;
   behavior->owner = (Object)counter_58_84_46306100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg += 1;
   clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg = realloc(clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg,clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg*sizeof(Object));
clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg[clk_47345840_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg-1] = (Object)behavior;
   behavior->block = make__46927240();

   return behavior;
}

Behavior __47315240;

Behavior make__47315240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47315240 = behavior;
   behavior->owner = (Object)counter_58_84_46306100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[q_46679040_counter_58_84_46306100_counter_58_841_47311720_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__47005740();

   return behavior;
}

Scope makecounter_58_84_46306100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_46306100 = scope;
   scope->owner = (Object)counter_58_841_47311720;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_46679040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46927680();
   scope->behaviors[1] = make__47006200();
   scope->behaviors[2] = make__47315240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_47311720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_47311720 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_47345840();
   systemT->inputs[1] = makeack_47345680();
   systemT->inputs[2] = makerst_47344780();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_47344260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_46306100();

   return systemT;
}