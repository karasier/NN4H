#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_54959600;

SignalI clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeclk_54957760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_8400_54959600;
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

SignalI ack_54957740_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack_54957740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54957740_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_8400_54959600;
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

SignalI rst_54957720_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerst_54957720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54957720_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_8400_54959600;
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

SignalI ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__mac_54957680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_8400_54959600;
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

Block __50498040;

Block __50497820;

void code__50497820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76136600(),q_50498160_counter_58_840_50498540_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76136540(),ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50497820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50497820 = block;
   block->owner = (Object)__50498040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50497820;

   return block;
};

Block __50497140;

Block __50496980;

Block __50496180;

void code__50496180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76160580(),q_50498160_counter_58_840_50498540_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76160520(),ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50496180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50496180 = block;
   block->owner = (Object)__50496980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50496180;

   return block;
};

void code__50496980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = q_50498160_counter_58_840_50498540_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76160840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_50498160_counter_58_840_50498540_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50498160_counter_58_840_50498540_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76160700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50496180();
   }
      }
   }
}

Block make__50496980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50496980 = block;
   block->owner = (Object)__50497140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50496980;

   return block;
};

void code__50497140() {
 code__50496980();
}

Block make__50497140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50497140 = block;
   block->owner = (Object)__50498040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50497140;

   return block;
};

void code__50498040() {
   {
      Value cond = rst_54957720_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50497820();
   }
   else if (value2integer(ack_54957740_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value)) {
  code__50497140();
   }
      }
   }
}

Block make__50498040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50498040 = block;
   block->owner = (Object)__54959920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50498040;

   return block;
};

Value make__76136600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__76136540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76160840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76160700() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76160580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__76160520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_50498540;

SignalI q_50498160_counter_58_840_50498540_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeq_50498160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_50498160_counter_58_840_50498540_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_840_50498540;
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

Behavior __54959920;

Behavior make__54959920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54959920 = behavior;
   behavior->owner = (Object)counter_58_840_50498540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg = realloc(clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg,clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg[clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__50498040();

   return behavior;
}

Scope makecounter_58_840_50498540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_50498540 = scope;
   scope->owner = (Object)counter_58_8400_54959600;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_50498160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54959920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_54959600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_54959600 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54957760();
   systemT->inputs[1] = makeack_54957740();
   systemT->inputs[2] = makerst_54957720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_54957680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_50498540();

   return systemT;
}