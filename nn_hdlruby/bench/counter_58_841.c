#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_51138300;

SignalI clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeclk_51135760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_841_51138300;
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

SignalI ack_51135720_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack_51135720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51135720_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_841_51138300;
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

SignalI rst_51135700_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makerst_51135700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51135700_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_841_51138300;
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

SignalI ack__mac_51135640_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack__mac_51135640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51135640_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_841_51138300;
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

Block __51110760;

Block __51110300;

void code__51110300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52826260(),q_51110900_counter_58_84_51111560_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52825800(),ack__mac_51135640_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__51110300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51110300 = block;
   block->owner = (Object)__51110760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51110300;

   return block;
};

Block __51141340;

Block __51140940;

Block __51139900;

void code__51139900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__52854140(),q_51110900_counter_58_84_51111560_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__52853980(),ack__mac_51135640_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__51139900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51139900 = block;
   block->owner = (Object)__51140940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51139900;

   return block;
};

void code__51140940() {
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
                  src0 = q_51110900_counter_58_84_51111560_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52822160();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51110900_counter_58_84_51111560_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51110900_counter_58_84_51111560_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52854420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51139900();
   }
      }
   }
}

Block make__51140940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51140940 = block;
   block->owner = (Object)__51141340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51140940;

   return block;
};

void code__51141340() {
 code__51140940();
}

Block make__51141340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51141340 = block;
   block->owner = (Object)__51110760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51141340;

   return block;
};

void code__51110760() {
   {
      Value cond = rst_51135700_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51110300();
   }
   else if (value2integer(ack_51135720_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value)) {
  code__51141340();
   }
      }
   }
}

Block make__51110760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51110760 = block;
   block->owner = (Object)__51138800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51110760;

   return block;
};

Value make__52826260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52825800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52822160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52854420() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52854140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52853980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_51111560;

SignalI q_51110900_counter_58_84_51111560_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeq_51110900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51110900_counter_58_84_51111560_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)counter_58_84_51111560;
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

Behavior __51138800;

Behavior make__51138800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51138800 = behavior;
   behavior->owner = (Object)counter_58_84_51111560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg += 1;
   clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg = realloc(clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg,clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg*sizeof(Object));
clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg[clk_51135760_counter_58_841_51138300_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg-1] = (Object)behavior;
   behavior->block = make__51110760();

   return behavior;
}

Scope makecounter_58_84_51111560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_51111560 = scope;
   scope->owner = (Object)counter_58_841_51138300;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51110900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51138800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_51138300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_51138300 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51135760();
   systemT->inputs[1] = makeack_51135720();
   systemT->inputs[2] = makerst_51135700();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51135640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_51111560();

   return systemT;
}