#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_58818240;

SignalI clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeclk_58816000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_8400_58818240;
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

SignalI ack_58815980_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack_58815980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_58815980_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_8400_58818240;
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

SignalI rst_58815960_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerst_58815960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58815960_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_8400_58818240;
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

SignalI ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__mac_58815920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_8400_58818240;
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

Block __58748280;

Block __58748060;

void code__58748060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57736340(),q_58748400_counter_58_840_58748880_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57736280(),ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58748060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58748060 = block;
   block->owner = (Object)__58748280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58748060;

   return block;
};

Block __58747260;

Block __58747040;

Block __58746020;

void code__58746020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57735880(),q_58748400_counter_58_840_58748880_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57735800(),ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58746020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58746020 = block;
   block->owner = (Object)__58747040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58746020;

   return block;
};

void code__58747040() {
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
                  src0 = q_58748400_counter_58_840_58748880_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57736080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_58748400_counter_58_840_58748880_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58748400_counter_58_840_58748880_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57735960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58746020();
   }
      }
   }
}

Block make__58747040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58747040 = block;
   block->owner = (Object)__58747260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58747040;

   return block;
};

void code__58747260() {
 code__58747040();
}

Block make__58747260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58747260 = block;
   block->owner = (Object)__58748280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58747260;

   return block;
};

void code__58748280() {
   {
      Value cond = rst_58815960_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58748060();
   }
   else if (value2integer(ack_58815980_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value)) {
  code__58747260();
   }
      }
   }
}

Block make__58748280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58748280 = block;
   block->owner = (Object)__58745000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58748280;

   return block;
};

Value make__57736340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57736280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57736080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57735960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57735880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57735800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_58748880;

SignalI q_58748400_counter_58_840_58748880_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeq_58748400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_58748400_counter_58_840_58748880_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)counter_58_840_58748880;
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

Behavior __58745000;

Behavior make__58745000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58745000 = behavior;
   behavior->owner = (Object)counter_58_840_58748880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__58748280();

   return behavior;
}

Scope makecounter_58_840_58748880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_58748880 = scope;
   scope->owner = (Object)counter_58_8400_58818240;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_58748400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58745000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_58818240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_58818240 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58816000();
   systemT->inputs[1] = makeack_58815980();
   systemT->inputs[2] = makerst_58815960();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_58815920();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_58748880();

   return systemT;
}