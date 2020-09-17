#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_52796340;

SignalI clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeclk_52794300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_841_52796340;
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

SignalI ack_52794280_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeack_52794280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52794280_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_841_52796340;
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

SignalI rst_52794260_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makerst_52794260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52794260_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_841_52796340;
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

SignalI ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeack__mac_52794220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_841_52796340;
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

Block __52744480;

Block __52744260;

void code__52744260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60935940(),q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60935880(),ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52744260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52744260 = block;
   block->owner = (Object)__52744480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52744260;

   return block;
};

Block __52743480;

void code__52743480() {
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
                  src0 = q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60935680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52743480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52743480 = block;
   block->owner = (Object)__52744480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52743480;

   return block;
};

void code__52744480() {
   {
      Value cond = rst_52794260_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52744260();
   }
   else if (value2integer(ack_52794280_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value)) {
  code__52743480();
   }
      }
   }
}

Block make__52744480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52744480 = block;
   block->owner = (Object)__52742620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52744480;

   return block;
};

Block __52742200;

Block __52741640;

void code__52741640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60935400(),q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52741640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52741640 = block;
   block->owner = (Object)__52742200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52741640;

   return block;
};

void code__52742200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60935500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52741640();
   }
      }
   }
}

Block make__52742200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52742200 = block;
   block->owner = (Object)__52740720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52742200;

   return block;
};

Block __52740600;

Block __52740220;

void code__52740220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60935180(),ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52740220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52740220 = block;
   block->owner = (Object)__52740600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52740220;

   return block;
};

void code__52740600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60935320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52740220();
   }
      }
   }
}

Block make__52740600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52740600 = block;
   block->owner = (Object)__52796720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52740600;

   return block;
};

Value make__60935940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60935880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60935680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60935500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60935400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60935320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60935180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_52745080;

SignalI q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeq_52744600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_84_52745080;
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

Behavior __52742620;

Behavior make__52742620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52742620 = behavior;
   behavior->owner = (Object)counter_58_84_52745080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos = realloc(clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos,clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos[clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__52744480();

   return behavior;
}

Behavior __52740720;

Behavior make__52740720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52740720 = behavior;
   behavior->owner = (Object)counter_58_84_52745080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg += 1;
   clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg = realloc(clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg,clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg*sizeof(Object));
clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg[clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg-1] = (Object)behavior;
   behavior->block = make__52742200();

   return behavior;
}

Behavior __52796720;

Behavior make__52796720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52796720 = behavior;
   behavior->owner = (Object)counter_58_84_52745080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[q_52744600_counter_58_84_52745080_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__52740600();

   return behavior;
}

Scope makecounter_58_84_52745080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_52745080 = scope;
   scope->owner = (Object)counter_58_841_52796340;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_52744600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52742620();
   scope->behaviors[1] = make__52740720();
   scope->behaviors[2] = make__52796720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_52796340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_52796340 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52794300();
   systemT->inputs[1] = makeack_52794280();
   systemT->inputs[2] = makerst_52794260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_52794220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_52745080();

   return systemT;
}