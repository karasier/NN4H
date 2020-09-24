#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_51472160;

SignalI clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeclk_53206800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_8400_51472160;
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

SignalI ack_53206780_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack_53206780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53206780_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_8400_51472160;
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

SignalI rst_53206760_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makerst_53206760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53206760_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_8400_51472160;
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

SignalI ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__mac_53206720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_8400_51472160;
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

Block __51477100;

Block __51476880;

void code__51476880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53570060(),q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53569980(),ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51476880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51476880 = block;
   block->owner = (Object)__51477100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51476880;

   return block;
};

Block __51476160;

void code__51476160() {
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
                  src0 = q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53568980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51476160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51476160 = block;
   block->owner = (Object)__51477100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51476160;

   return block;
};

void code__51477100() {
   {
      Value cond = rst_53206760_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51476880();
   }
   else if (value2integer(ack_53206780_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value)) {
  code__51476160();
   }
      }
   }
}

Block make__51477100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51477100 = block;
   block->owner = (Object)__51475040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51477100;

   return block;
};

Block __51474920;

Block __51474540;

void code__51474540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53568040(),q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51474540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51474540 = block;
   block->owner = (Object)__51474920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51474540;

   return block;
};

void code__51474920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53568240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51474540();
   }
      }
   }
}

Block make__51474920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51474920 = block;
   block->owner = (Object)__51473820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51474920;

   return block;
};

Block __51473640;

Block __51473200;

void code__51473200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53567780(),ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51473200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51473200 = block;
   block->owner = (Object)__51473640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51473200;

   return block;
};

void code__51473640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53567920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51473200();
   }
      }
   }
}

Block make__51473640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51473640 = block;
   block->owner = (Object)__51472480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51473640;

   return block;
};

Value make__53570060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53569980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53568980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53568240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53568040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53567920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53567780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_51477700;

SignalI q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeq_51477220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_840_51477700;
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

Behavior __51475040;

Behavior make__51475040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51475040 = behavior;
   behavior->owner = (Object)counter_58_840_51477700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos += 1;
   clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos = realloc(clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos,clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos*sizeof(Object));
clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos[clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos-1] = (Object)behavior;
   behavior->block = make__51477100();

   return behavior;
}

Behavior __51473820;

Behavior make__51473820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51473820 = behavior;
   behavior->owner = (Object)counter_58_840_51477700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg += 1;
   clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg = realloc(clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg,clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg*sizeof(Object));
clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg[clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg-1] = (Object)behavior;
   behavior->block = make__51474920();

   return behavior;
}

Behavior __51472480;

Behavior make__51472480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51472480 = behavior;
   behavior->owner = (Object)counter_58_840_51477700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[q_51477220_counter_58_840_51477700_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__51473640();

   return behavior;
}

Scope makecounter_58_840_51477700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_51477700 = scope;
   scope->owner = (Object)counter_58_8400_51472160;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51477220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51475040();
   scope->behaviors[1] = make__51473820();
   scope->behaviors[2] = make__51472480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_51472160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_51472160 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53206800();
   systemT->inputs[1] = makeack_53206780();
   systemT->inputs[2] = makerst_53206760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53206720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_51477700();

   return systemT;
}