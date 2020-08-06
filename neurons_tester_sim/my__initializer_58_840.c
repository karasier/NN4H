#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__initializer_58_840_45708040;

SignalI clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeclk_45735480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)my__initializer_58_840_45708040;
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

SignalI flag_45735340_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeflag_45735340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag_45735340_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)my__initializer_58_840_45708040;
   signalI->name = "flag";
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

Block __45607920;

Block __45606740;

Block __45653880;

void code__45653880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47144360(),_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45653880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45653880 = block;
   block->owner = (Object)__45606740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45653880;

   return block;
};

void code__45606740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45728820_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47144440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45653880();
   }
      }
   }
}

Block make__45606740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45606740 = block;
   block->owner = (Object)__45607920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45606740;

   return block;
};

Block __45653140;

Block __45652660;

void code__45652660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47144200(),_5819_44549480___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45652660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45652660 = block;
   block->owner = (Object)__45653140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45652660;

   return block;
};

void code__45653140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45728820_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47144280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45652660();
   }
      }
   }
}

Block make__45653140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45653140 = block;
   block->owner = (Object)__45607920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45653140;

   return block;
};

Block __45651700;

Block __45651440;

Block __45650940;

Block __45650040;

void code__45650040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = val_45609140___45610720_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5817_44549700___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45650040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45650040 = block;
   block->owner = (Object)__45650940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45650040;

   return block;
};

Block __45646620;

void code__45646620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = val_45609140___45610720_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5818_44549580___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45646620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45646620 = block;
   block->owner = (Object)__45650940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45646620;

   return block;
};

void code__45650940() {
{
      Value value = _5819_44549480___44606540______58_840_45889040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47143960())) {
    code__45650040();
         }
         else if (value2integer(value) == value2integer(make__47143840())) {
    code__45646620();
         }
      }
   }
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
                  src0 = _5819_44549480___44606540______58_840_45889040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47143620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5819_44549480___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45650940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45650940 = block;
   block->owner = (Object)__45651440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45650940;

   return block;
};

void code__45651440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45728820_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47144080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45650940();
   }
      }
   }
}

Block make__45651440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45651440 = block;
   block->owner = (Object)__45651700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45651440;

   return block;
};

Block __45669640;

Block __45668640;

Block __45666800;

void code__45666800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = val_45609140___45610720_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45666800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45666800 = block;
   block->owner = (Object)__45668640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45666800;

   return block;
};

Block __45664080;

void code__45664080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = val_45609140___45610720_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45664080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45664080 = block;
   block->owner = (Object)__45668640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45664080;

   return block;
};

void code__45668640() {
{
      Value value = _5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47143380())) {
    code__45666800();
         }
         else if (value2integer(value) == value2integer(make__47143260())) {
    code__45664080();
         }
      }
   }
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
                  src0 = _5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47143040();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45668640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45668640 = block;
   block->owner = (Object)__45669640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45668640;

   return block;
};

void code__45669640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45728820_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47143500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45668640();
   }
      }
   }
}

Block make__45669640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45669640 = block;
   block->owner = (Object)__45651700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45669640;

   return block;
};

void code__45651700() {
 code__45651440();
 code__45669640();
}

Block make__45651700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45651700 = block;
   block->owner = (Object)__45607920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45651700;

   return block;
};

void code__45607920() {
 code__45606740();
 code__45653140();
   {
      Value cond = flag_45735340_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45651700();
   }
      }
   }
}

Block make__45607920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45607920 = block;
   block->owner = (Object)__45709200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45607920;

   return block;
};

Block __47124060;

void code__47124060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47142940(),val_45609140___45610720_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47124060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47124060 = block;
   block->owner = (Object)__47123920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47124060;

   return block;
};

Value make__47144440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47144360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47144280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47144200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47144080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47143960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47143840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47143620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47143500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47143380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47143260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47143040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47142940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope __45610720;

SignalI val_45609140___45610720_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeval_45609140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_45609140___45610720_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45610720;
   signalI->name = "val";
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

Behavior __45709200;

Behavior make__45709200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45709200 = behavior;
   behavior->owner = (Object)__45610720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_pos += 1;
   clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->pos = realloc(clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->pos,clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_pos*sizeof(Object));
clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->pos[clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_pos-1] = (Object)behavior;
   behavior->block = make__45607920();

   return behavior;
}

Behavior __47123920;

Behavior make__47123920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47123920 = behavior;
   behavior->owner = (Object)__45610720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47124060();

   return behavior;
}

Scope make__45610720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45610720 = scope;
   scope->owner = (Object)my__initializer_58_840_45708040;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeval_45609140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45709200();
   scope->behaviors[1] = make__47123920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__initializer_58_840_45708040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__initializer_58_840_45708040 = systemT;
systemT->owner = NULL;
   systemT->name = "my_initializer:T0";
   systemT->num_inputs = 2;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_45735480();
   systemT->inputs[1] = makeflag_45735340();
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45610720();

   return systemT;
}