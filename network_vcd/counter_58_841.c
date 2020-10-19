#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_57012540;

SignalI clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeclk_57010600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_841_57012540;
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

SignalI ack_57010580_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack_57010580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_57010580_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_841_57012540;
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

SignalI rst_57010560_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerst_57010560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57010560_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_841_57012540;
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

SignalI ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__mac_57010520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_841_57012540;
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

Block __57000100;

Block __57016000;

void code__57016000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62641780(),q_57000220_counter_58_84_57001020_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62641720(),ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__57016000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57016000 = block;
   block->owner = (Object)__57000100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57016000;

   return block;
};

Block __57014780;

Block __57014620;

Block __57013820;

void code__57013820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62641320(),q_57000220_counter_58_84_57001020_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62641260(),ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__57013820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57013820 = block;
   block->owner = (Object)__57014620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57013820;

   return block;
};

void code__57014620() {
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
                  src0 = q_57000220_counter_58_84_57001020_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62641520();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_57000220_counter_58_84_57001020_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_57000220_counter_58_84_57001020_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62641400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57013820();
   }
      }
   }
}

Block make__57014620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57014620 = block;
   block->owner = (Object)__57014780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57014620;

   return block;
};

void code__57014780() {
 code__57014620();
}

Block make__57014780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57014780 = block;
   block->owner = (Object)__57000100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57014780;

   return block;
};

void code__57000100() {
   {
      Value cond = rst_57010560_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57016000();
   }
   else if (value2integer(ack_57010580_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value)) {
  code__57014780();
   }
      }
   }
}

Block make__57000100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57000100 = block;
   block->owner = (Object)__57012860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57000100;

   return block;
};

Value make__62641780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62641720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62641520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62641400() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62641320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62641260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_57001020;

SignalI q_57000220_counter_58_84_57001020_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeq_57000220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_57000220_counter_58_84_57001020_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_84_57001020;
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

Behavior __57012860;

Behavior make__57012860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57012860 = behavior;
   behavior->owner = (Object)counter_58_84_57001020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg += 1;
   clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg = realloc(clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg,clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg*sizeof(Object));
clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg[clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg-1] = (Object)behavior;
   behavior->block = make__57000100();

   return behavior;
}

Scope makecounter_58_84_57001020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_57001020 = scope;
   scope->owner = (Object)counter_58_841_57012540;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_57000220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57012860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_57012540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_57012540 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57010600();
   systemT->inputs[1] = makeack_57010580();
   systemT->inputs[2] = makerst_57010560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_57010520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_57001020();

   return systemT;
}