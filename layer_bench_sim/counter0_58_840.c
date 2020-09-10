#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter0_58_840_53455720;

SignalI ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeack_53453680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)counter0_58_840_53455720;
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

SignalI rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makerst_53453660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)counter0_58_840_53455720;
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

SignalI ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeack__mac_53453620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)counter0_58_840_53455720;
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

Block __53460940;

void code__53460940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59867640(),q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59867580(),ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53460940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53460940 = block;
   block->owner = (Object)__53460040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53460940;

   return block;
};

Block __53459920;

void code__53459920() {
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
                  src0 = q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59867460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53459920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53459920 = block;
   block->owner = (Object)__53459100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53459920;

   return block;
};

Block __53458960;

Block __53458520;

void code__53458520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59867260(),q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53458520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53458520 = block;
   block->owner = (Object)__53458960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53458520;

   return block;
};

void code__53458960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59867340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53458520();
   }
      }
   }
}

Block make__53458960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53458960 = block;
   block->owner = (Object)__53457740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53458960;

   return block;
};

Block __53457620;

Block __53456880;

void code__53456880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60022720(),ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53456880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53456880 = block;
   block->owner = (Object)__53457620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53456880;

   return block;
};

Block __53457460;

void code__53457460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60022660(),ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53457460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53457460 = block;
   block->owner = (Object)__53457620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53457460;

   return block;
};

void code__53457620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59867180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53456880();
   }
   else {
  code__53457460();
   }
      }
   }
}

Block make__53457620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53457620 = block;
   block->owner = (Object)__53456100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53457620;

   return block;
};

Value make__59867640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59867580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59867460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59867340() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59867260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59867180() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60022720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60022660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter0_58_84_53436960;

SignalI q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeq_53436540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)counter0_58_84_53436960;
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

Behavior __53460040;

Behavior make__53460040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53460040 = behavior;
   behavior->owner = (Object)counter0_58_84_53436960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos += 1;
   rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos = realloc(rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos,rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos[rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__53460940();

   return behavior;
}

Behavior __53459100;

Behavior make__53459100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53459100 = behavior;
   behavior->owner = (Object)counter0_58_84_53436960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos += 1;
   ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos = realloc(ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos,ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos[ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__53459920();

   return behavior;
}

Behavior __53457740;

Behavior make__53457740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53457740 = behavior;
   behavior->owner = (Object)counter0_58_84_53436960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg += 1;
   ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg = realloc(ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg,ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg*sizeof(Object));
ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg[ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg-1] = (Object)behavior;
   behavior->block = make__53458960();

   return behavior;
}

Behavior __53456100;

Behavior make__53456100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53456100 = behavior;
   behavior->owner = (Object)counter0_58_84_53436960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[q_53436540_counter0_58_84_53436960_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__53457620();

   return behavior;
}

Scope makecounter0_58_84_53436960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter0_58_84_53436960 = scope;
   scope->owner = (Object)counter0_58_840_53455720;
   scope->name = "counter0:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53436540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53460040();
   scope->behaviors[1] = make__53459100();
   scope->behaviors[2] = make__53457740();
   scope->behaviors[3] = make__53456100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter0_58_840_53455720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter0_58_840_53455720 = systemT;
systemT->owner = NULL;
   systemT->name = "counter0:T0";
   systemT->num_inputs = 2;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeack_53453680();
   systemT->inputs[1] = makerst_53453660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53453620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter0_58_84_53436960();

   return systemT;
}