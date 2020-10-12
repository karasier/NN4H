#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_50331200;

SignalI clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeclk_50328580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_841_50331200;
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

SignalI ack_50328460_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack_50328460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50328460_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_841_50331200;
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

SignalI rst_50328440_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerst_50328440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50328440_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_841_50331200;
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

SignalI ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__mac_50328400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_841_50331200;
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

Block __50310780;

Block __50310540;

void code__50310540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56534920(),q_50310900_counter_58_84_50311380_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56534840(),ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50310540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50310540 = block;
   block->owner = (Object)__50310780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50310540;

   return block;
};

Block __50309580;

Block __50309380;

Block __50308320;

void code__50308320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56534060(),q_50310900_counter_58_84_50311380_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56533980(),ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50308320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50308320 = block;
   block->owner = (Object)__50309380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50308320;

   return block;
};

void code__50309380() {
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
                  src0 = q_50310900_counter_58_84_50311380_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56534600();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_50310900_counter_58_84_50311380_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50310900_counter_58_84_50311380_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56534320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50308320();
   }
      }
   }
}

Block make__50309380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50309380 = block;
   block->owner = (Object)__50309580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50309380;

   return block;
};

void code__50309580() {
 code__50309380();
}

Block make__50309580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50309580 = block;
   block->owner = (Object)__50310780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50309580;

   return block;
};

void code__50310780() {
   {
      Value cond = rst_50328440_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50310540();
   }
   else if (value2integer(ack_50328460_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value)) {
  code__50309580();
   }
      }
   }
}

Block make__50310780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50310780 = block;
   block->owner = (Object)__50307160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50310780;

   return block;
};

Value make__56534920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56534840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56534600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56534320() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56534060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56533980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_50311380;

SignalI q_50310900_counter_58_84_50311380_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeq_50310900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_50310900_counter_58_84_50311380_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_84_50311380;
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

Behavior __50307160;

Behavior make__50307160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50307160 = behavior;
   behavior->owner = (Object)counter_58_84_50311380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__50310780();

   return behavior;
}

Scope makecounter_58_84_50311380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_50311380 = scope;
   scope->owner = (Object)counter_58_841_50331200;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_50310900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50307160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_50331200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_50331200 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50328580();
   systemT->inputs[1] = makeack_50328460();
   systemT->inputs[2] = makerst_50328440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_50328400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_50311380();

   return systemT;
}