#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_50948020;

SignalI clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeclk_50966420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_8400_50948020;
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

SignalI ack_50966400_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack_50966400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50966400_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_8400_50948020;
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

SignalI rst_50966320_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerst_50966320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50966320_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_8400_50948020;
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

SignalI ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__mac_50965820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_8400_50948020;
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

Block __50909860;

Block __50908800;

void code__50908800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57943880(),q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57943800(),ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50908800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50908800 = block;
   block->owner = (Object)__50909860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50908800;

   return block;
};

Block __50907600;

void code__50907600() {
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
                  src0 = q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57943560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50907600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50907600 = block;
   block->owner = (Object)__50909860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50907600;

   return block;
};

void code__50909860() {
   {
      Value cond = rst_50966320_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50908800();
   }
   else if (value2integer(ack_50966400_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value)) {
  code__50907600();
   }
      }
   }
}

Block make__50909860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50909860 = block;
   block->owner = (Object)__50905480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50909860;

   return block;
};

Block __50905240;

Block __50952800;

void code__50952800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57943280(),q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50952800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50952800 = block;
   block->owner = (Object)__50905240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50952800;

   return block;
};

void code__50905240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57943360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50952800();
   }
      }
   }
}

Block make__50905240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50905240 = block;
   block->owner = (Object)__50951660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50905240;

   return block;
};

Block __50951360;

Block __50950660;

void code__50950660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57943120(),ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50950660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50950660 = block;
   block->owner = (Object)__50951360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50950660;

   return block;
};

void code__50951360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57943200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50950660();
   }
      }
   }
}

Block make__50951360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50951360 = block;
   block->owner = (Object)__50948540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50951360;

   return block;
};

Value make__57943880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57943800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57943560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57943360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57943280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57943200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57943120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_50910660;

SignalI q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeq_50910140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_840_50910660;
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

Behavior __50905480;

Behavior make__50905480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50905480 = behavior;
   behavior->owner = (Object)counter_58_840_50910660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__50909860();

   return behavior;
}

Behavior __50951660;

Behavior make__50951660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50951660 = behavior;
   behavior->owner = (Object)counter_58_840_50910660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg += 1;
   clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg = realloc(clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg,clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg*sizeof(Object));
clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg[clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg-1] = (Object)behavior;
   behavior->block = make__50905240();

   return behavior;
}

Behavior __50948540;

Behavior make__50948540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50948540 = behavior;
   behavior->owner = (Object)counter_58_840_50910660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[q_50910140_counter_58_840_50910660_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__50951360();

   return behavior;
}

Scope makecounter_58_840_50910660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_50910660 = scope;
   scope->owner = (Object)counter_58_8400_50948020;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_50910140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50905480();
   scope->behaviors[1] = make__50951660();
   scope->behaviors[2] = make__50948540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_50948020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_50948020 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50966420();
   systemT->inputs[1] = makeack_50966400();
   systemT->inputs[2] = makerst_50966320();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_50965820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_50910660();

   return systemT;
}