#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_843_51203280;

SignalI clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeclk_51240560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_843_51203280;
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

SignalI ack_51240540_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack_51240540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51240540_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_843_51203280;
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

SignalI rst_51240500_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerst_51240500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51240500_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_843_51203280;
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

SignalI ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__mac_51240420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_843_51203280;
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

Block __51207700;

Block __51207460;

void code__51207460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75789840(),q_51207840_counter_58_84_51183760_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75789780(),ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51207460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51207460 = block;
   block->owner = (Object)__51207700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51207460;

   return block;
};

Block __51206340;

Block __51206120;

Block __51205240;

void code__51205240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__75789360(),q_51207840_counter_58_84_51183760_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__75789300(),ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51205240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51205240 = block;
   block->owner = (Object)__51206120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51205240;

   return block;
};

void code__51206120() {
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
                  src0 = q_51207840_counter_58_84_51183760_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__75789580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51207840_counter_58_84_51183760_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51207840_counter_58_84_51183760_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75789460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51205240();
   }
      }
   }
}

Block make__51206120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51206120 = block;
   block->owner = (Object)__51206340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51206120;

   return block;
};

void code__51206340() {
 code__51206120();
}

Block make__51206340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51206340 = block;
   block->owner = (Object)__51207700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51206340;

   return block;
};

void code__51207700() {
   {
      Value cond = rst_51240500_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51207460();
   }
   else if (value2integer(ack_51240540_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value)) {
  code__51206340();
   }
      }
   }
}

Block make__51207700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51207700 = block;
   block->owner = (Object)__51203760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51207700;

   return block;
};

Value make__75789840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__75789780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75789580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75789460() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75789360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__75789300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_51183760;

SignalI q_51207840_counter_58_84_51183760_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeq_51207840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51207840_counter_58_84_51183760_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)counter_58_84_51183760;
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

Behavior __51203760;

Behavior make__51203760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51203760 = behavior;
   behavior->owner = (Object)counter_58_84_51183760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg = realloc(clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg,clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg[clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__51207700();

   return behavior;
}

Scope makecounter_58_84_51183760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_51183760 = scope;
   scope->owner = (Object)counter_58_843_51203280;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51207840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51203760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_843_51203280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_843_51203280 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T3";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51240560();
   systemT->inputs[1] = makeack_51240540();
   systemT->inputs[2] = makerst_51240500();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51240420();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_51183760();

   return systemT;
}