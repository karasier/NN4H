#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter0_58_840_53554820;

SignalI clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeclk_53552780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter0_58_840_53554820;
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

SignalI ack_53552760_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeack_53552760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53552760_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter0_58_840_53554820;
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

SignalI rst_53552740_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makerst_53552740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53552740_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter0_58_840_53554820;
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

SignalI ack__mac_53552700_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeack__mac_53552700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53552700_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter0_58_840_53554820;
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

Block __53395820;

Block __53395600;

void code__53395600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60507940(),q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60507880(),ack__mac_53552700_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53395600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53395600 = block;
   block->owner = (Object)__53395820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53395600;

   return block;
};

Block __53558720;

void code__53558720() {
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
                  src0 = q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60507680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53558720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53558720 = block;
   block->owner = (Object)__53395820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53558720;

   return block;
};

void code__53395820() {
   {
      Value cond = rst_53552740_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53395600();
   }
   else if (value2integer(ack_53552760_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value)) {
  code__53558720();
   }
      }
   }
}

Block make__53395820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53395820 = block;
   block->owner = (Object)__53557820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53395820;

   return block;
};

Block __53557640;

Block __53557200;

void code__53557200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60507440(),q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53557200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53557200 = block;
   block->owner = (Object)__53557640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53557200;

   return block;
};

void code__53557640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60507520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53557200();
   }
      }
   }
}

Block make__53557640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53557640 = block;
   block->owner = (Object)__53556520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53557640;

   return block;
};

Block __53556400;

Block __53556000;

void code__53556000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60507280(),ack__mac_53552700_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53556000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53556000 = block;
   block->owner = (Object)__53556400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53556000;

   return block;
};

void code__53556400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60507360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53556000();
   }
      }
   }
}

Block make__53556400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53556400 = block;
   block->owner = (Object)__53555140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53556400;

   return block;
};

Value make__60507940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60507880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60507680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60507520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60507440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60507360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60507280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter0_58_84_53396520;

SignalI q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeq_53396000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter0_58_84_53396520;
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

Behavior __53557820;

Behavior make__53557820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53557820 = behavior;
   behavior->owner = (Object)counter0_58_84_53396520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_pos += 1;
   clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->pos = realloc(clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->pos,clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_pos*sizeof(Object));
clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->pos[clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_pos-1] = (Object)behavior;
   behavior->block = make__53395820();

   return behavior;
}

Behavior __53556520;

Behavior make__53556520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53556520 = behavior;
   behavior->owner = (Object)counter0_58_84_53396520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_neg += 1;
   clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->neg = realloc(clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->neg,clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_neg*sizeof(Object));
clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->neg[clk_53552780_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_neg-1] = (Object)behavior;
   behavior->block = make__53557640();

   return behavior;
}

Behavior __53555140;

Behavior make__53555140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53555140 = behavior;
   behavior->owner = (Object)counter0_58_84_53396520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[q_53396000_counter0_58_84_53396520_counter0_58_840_53554820_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__53556400();

   return behavior;
}

Scope makecounter0_58_84_53396520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter0_58_84_53396520 = scope;
   scope->owner = (Object)counter0_58_840_53554820;
   scope->name = "counter0:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53396000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53557820();
   scope->behaviors[1] = make__53556520();
   scope->behaviors[2] = make__53555140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter0_58_840_53554820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter0_58_840_53554820 = systemT;
systemT->owner = NULL;
   systemT->name = "counter0:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53552780();
   systemT->inputs[1] = makeack_53552760();
   systemT->inputs[2] = makerst_53552740();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53552700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter0_58_84_53396520();

   return systemT;
}