#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter1_58_840_58830100;

SignalI clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeclk_58828260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter1_58_840_58830100;
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

SignalI ack_58828240_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeack_58828240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_58828240_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter1_58_840_58830100;
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

SignalI rst_58828220_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makerst_58828220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58828220_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter1_58_840_58830100;
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

SignalI ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeack__mac_58828180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter1_58_840_58830100;
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

Block __58834500;

Block __58834280;

void code__58834280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60871140(),q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60870900(),ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__58834280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58834280 = block;
   block->owner = (Object)__58834500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58834280;

   return block;
};

Block __58833600;

void code__58833600() {
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
                  src0 = q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60870700();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__58833600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58833600 = block;
   block->owner = (Object)__58834500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58833600;

   return block;
};

void code__58834500() {
   {
      Value cond = rst_58828220_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58834280();
   }
   else if (value2integer(ack_58828240_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value)) {
  code__58833600();
   }
      }
   }
}

Block make__58834500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58834500 = block;
   block->owner = (Object)__58832780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58834500;

   return block;
};

Block __58832660;

Block __58832280;

void code__58832280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60870460(),q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__58832280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58832280 = block;
   block->owner = (Object)__58832660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58832280;

   return block;
};

void code__58832660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60870540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58832280();
   }
      }
   }
}

Block make__58832660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58832660 = block;
   block->owner = (Object)__58831600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58832660;

   return block;
};

Block __58831480;

Block __58831100;

void code__58831100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60870300(),ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__58831100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58831100 = block;
   block->owner = (Object)__58831480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58831100;

   return block;
};

void code__58831480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60870380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58831100();
   }
      }
   }
}

Block make__58831480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58831480 = block;
   block->owner = (Object)__58830420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58831480;

   return block;
};

Value make__60871140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60870900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60870700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60870540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60870460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60870380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60870300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter1_58_84_58810460;

SignalI q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeq_58834620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter1_58_84_58810460;
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

Behavior __58832780;

Behavior make__58832780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58832780 = behavior;
   behavior->owner = (Object)counter1_58_84_58810460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos += 1;
   clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos = realloc(clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos,clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos*sizeof(Object));
clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos[clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos-1] = (Object)behavior;
   behavior->block = make__58834500();

   return behavior;
}

Behavior __58831600;

Behavior make__58831600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58831600 = behavior;
   behavior->owner = (Object)counter1_58_84_58810460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_neg += 1;
   clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->neg = realloc(clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->neg,clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_neg*sizeof(Object));
clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->neg[clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_neg-1] = (Object)behavior;
   behavior->block = make__58832660();

   return behavior;
}

Behavior __58830420;

Behavior make__58830420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58830420 = behavior;
   behavior->owner = (Object)counter1_58_84_58810460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[q_58834620_counter1_58_84_58810460_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__58831480();

   return behavior;
}

Scope makecounter1_58_84_58810460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter1_58_84_58810460 = scope;
   scope->owner = (Object)counter1_58_840_58830100;
   scope->name = "counter1:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_58834620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58832780();
   scope->behaviors[1] = make__58831600();
   scope->behaviors[2] = make__58830420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter1_58_840_58830100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter1_58_840_58830100 = systemT;
systemT->owner = NULL;
   systemT->name = "counter1:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58828260();
   systemT->inputs[1] = makeack_58828240();
   systemT->inputs[2] = makerst_58828220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_58828180();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter1_58_84_58810460();

   return systemT;
}