#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_51525140;

SignalI clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeclk_51523300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_8400_51525140;
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

SignalI ack_51523280_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeack_51523280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51523280_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_8400_51525140;
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

SignalI rst_51523260_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makerst_51523260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51523260_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_8400_51525140;
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

SignalI ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeack__mac_51523220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_8400_51525140;
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

Block __55723880;

Block __55723660;

void code__55723660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60521680(),q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60521620(),ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__55723660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55723660 = block;
   block->owner = (Object)__55723880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55723660;

   return block;
};

Block __55722980;

void code__55722980() {
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
                  src0 = q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60521380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__55722980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55722980 = block;
   block->owner = (Object)__55723880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55722980;

   return block;
};

void code__55723880() {
   {
      Value cond = rst_51523260_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55723660();
   }
   else if (value2integer(ack_51523280_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value)) {
  code__55722980();
   }
      }
   }
}

Block make__55723880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55723880 = block;
   block->owner = (Object)__55722160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55723880;

   return block;
};

Block __55722040;

Block __51527320;

void code__51527320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60521080(),q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__51527320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51527320 = block;
   block->owner = (Object)__55722040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51527320;

   return block;
};

void code__55722040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60521160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51527320();
   }
      }
   }
}

Block make__55722040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55722040 = block;
   block->owner = (Object)__51526640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55722040;

   return block;
};

Block __51526520;

Block __51526140;

void code__51526140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60520920(),ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__51526140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51526140 = block;
   block->owner = (Object)__51526520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51526140;

   return block;
};

void code__51526520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60521000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51526140();
   }
      }
   }
}

Block make__51526520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51526520 = block;
   block->owner = (Object)__51525460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51526520;

   return block;
};

Value make__60521680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60521620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60521380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60521160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60521080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60521000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60520920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_55724380;

SignalI q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeq_55724000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_840_55724380;
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

Behavior __55722160;

Behavior make__55722160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55722160 = behavior;
   behavior->owner = (Object)counter_58_840_55724380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos = realloc(clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos,clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos[clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__55723880();

   return behavior;
}

Behavior __51526640;

Behavior make__51526640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51526640 = behavior;
   behavior->owner = (Object)counter_58_840_55724380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_neg += 1;
   clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->neg = realloc(clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->neg,clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_neg*sizeof(Object));
clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->neg[clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_neg-1] = (Object)behavior;
   behavior->block = make__55722040();

   return behavior;
}

Behavior __51525460;

Behavior make__51525460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51525460 = behavior;
   behavior->owner = (Object)counter_58_840_55724380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[q_55724000_counter_58_840_55724380_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__51526520();

   return behavior;
}

Scope makecounter_58_840_55724380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_55724380 = scope;
   scope->owner = (Object)counter_58_8400_51525140;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_55724000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55722160();
   scope->behaviors[1] = make__51526640();
   scope->behaviors[2] = make__51525460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_51525140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_51525140 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51523300();
   systemT->inputs[1] = makeack_51523280();
   systemT->inputs[2] = makerst_51523260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51523220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_55724380();

   return systemT;
}