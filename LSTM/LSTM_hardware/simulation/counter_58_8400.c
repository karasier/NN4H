#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_63459900;

SignalI clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeclk_63458060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_8400_63459900;
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

SignalI ack_63458040_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack_63458040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_63458040_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_8400_63459900;
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

SignalI rst_63458020_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerst_63458020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_63458020_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_8400_63459900;
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

SignalI ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__mac_63457980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_8400_63459900;
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

Block __63462940;

Block __63462720;

void code__63462720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78054500(),q_63463060_counter_58_840_63422520_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78054440(),ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63462720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63462720 = block;
   block->owner = (Object)__63462940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63462720;

   return block;
};

Block __63462040;

Block __63461880;

Block __63461080;

void code__63461080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78053940(),q_63463060_counter_58_840_63422520_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78053880(),ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63461080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63461080 = block;
   block->owner = (Object)__63461880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63461080;

   return block;
};

void code__63461880() {
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
                  src0 = q_63463060_counter_58_840_63422520_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78054200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_63463060_counter_58_840_63422520_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_63463060_counter_58_840_63422520_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78054060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63461080();
   }
      }
   }
}

Block make__63461880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63461880 = block;
   block->owner = (Object)__63462040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63461880;

   return block;
};

void code__63462040() {
 code__63461880();
}

Block make__63462040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63462040 = block;
   block->owner = (Object)__63462940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63462040;

   return block;
};

void code__63462940() {
   {
      Value cond = rst_63458020_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63462720();
   }
   else if (value2integer(ack_63458040_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value)) {
  code__63462040();
   }
      }
   }
}

Block make__63462940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63462940 = block;
   block->owner = (Object)__63460220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63462940;

   return block;
};

Value make__78054500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78054440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78054200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78054060() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78053940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78053880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_63422520;

SignalI q_63463060_counter_58_840_63422520_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeq_63463060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_63463060_counter_58_840_63422520_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)counter_58_840_63422520;
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

Behavior __63460220;

Behavior make__63460220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63460220 = behavior;
   behavior->owner = (Object)counter_58_840_63422520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg = realloc(clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg,clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg[clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__63462940();

   return behavior;
}

Scope makecounter_58_840_63422520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_63422520 = scope;
   scope->owner = (Object)counter_58_8400_63459900;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_63463060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63460220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_63459900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_63459900 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_63458060();
   systemT->inputs[1] = makeack_63458040();
   systemT->inputs[2] = makerst_63458020();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_63457980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_63422520();

   return systemT;
}