#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_51662300;

SignalI clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeclk_51659840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_841_51662300;
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

SignalI ack_51659820_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack_51659820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51659820_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_841_51662300;
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

SignalI rst_51659800_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerst_51659800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51659800_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_841_51662300;
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

SignalI ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__mac_51659760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_841_51662300;
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

Block __51666380;

Block __51666000;

void code__51666000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56937460(),q_51666520_counter_58_84_51642420_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56937400(),ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51666000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51666000 = block;
   block->owner = (Object)__51666380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51666000;

   return block;
};

Block __51665140;

Block __51664920;

Block __51663740;

void code__51663740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56937000(),q_51666520_counter_58_84_51642420_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56936920(),ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51663740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51663740 = block;
   block->owner = (Object)__51664920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51663740;

   return block;
};

void code__51664920() {
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
                  src0 = q_51666520_counter_58_84_51642420_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56937200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51666520_counter_58_84_51642420_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51666520_counter_58_84_51642420_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56937080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51663740();
   }
      }
   }
}

Block make__51664920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51664920 = block;
   block->owner = (Object)__51665140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51664920;

   return block;
};

void code__51665140() {
 code__51664920();
}

Block make__51665140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51665140 = block;
   block->owner = (Object)__51666380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51665140;

   return block;
};

void code__51666380() {
   {
      Value cond = rst_51659800_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51666000();
   }
   else if (value2integer(ack_51659820_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value)) {
  code__51665140();
   }
      }
   }
}

Block make__51666380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51666380 = block;
   block->owner = (Object)__51662760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51666380;

   return block;
};

Value make__56937460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56937400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56937200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56937080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56937000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56936920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_51642420;

SignalI q_51666520_counter_58_84_51642420_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeq_51666520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51666520_counter_58_84_51642420_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_84_51642420;
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

Behavior __51662760;

Behavior make__51662760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51662760 = behavior;
   behavior->owner = (Object)counter_58_84_51642420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__51666380();

   return behavior;
}

Scope makecounter_58_84_51642420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_51642420 = scope;
   scope->owner = (Object)counter_58_841_51662300;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51666520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51662760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_51662300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_51662300 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51659840();
   systemT->inputs[1] = makeack_51659820();
   systemT->inputs[2] = makerst_51659800();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51659760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_51642420();

   return systemT;
}