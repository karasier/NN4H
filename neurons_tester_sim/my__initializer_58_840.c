#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__initializer_58_840_42495260;

SignalI clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeclk_43240080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)my__initializer_58_840_42495260;
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

SignalI flag_43240060_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeflag_43240060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag_43240060_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)my__initializer_58_840_42495260;
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

Block __42209940;

Block __42208280;

Block __42226960;

void code__42226960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47147860(),_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__42226960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42226960 = block;
   block->owner = (Object)__42208280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42226960;

   return block;
};

void code__42208280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_43264440_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47147940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42226960();
   }
      }
   }
}

Block make__42208280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42208280 = block;
   block->owner = (Object)__42209940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42208280;

   return block;
};

Block __42252500;

Block __42249860;

void code__42249860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47147700(),_5819_41492100___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__42249860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42249860 = block;
   block->owner = (Object)__42252500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42249860;

   return block;
};

void code__42252500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_43264440_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47147780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42249860();
   }
      }
   }
}

Block make__42252500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42252500 = block;
   block->owner = (Object)__42209940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42252500;

   return block;
};

Block __42305820;

Block __42303640;

Block __42323560;

Block __42350560;

void code__42350560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = val_42166340___41804400_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5817_41547720___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__42350560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42350560 = block;
   block->owner = (Object)__42323560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42350560;

   return block;
};

Block __42347440;

void code__42347440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = val_42166340___41804400_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5818_41546660___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__42347440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42347440 = block;
   block->owner = (Object)__42323560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42347440;

   return block;
};

void code__42323560() {
{
      Value value = _5819_41492100___42310940______58_840_42670060->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47147440())) {
    code__42350560();
         }
         else if (value2integer(value) == value2integer(make__47147320())) {
    code__42347440();
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
                  src0 = _5819_41492100___42310940______58_840_42670060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47147100();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5819_41492100___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__42323560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42323560 = block;
   block->owner = (Object)__42303640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42323560;

   return block;
};

void code__42303640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_43264440_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47147560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42323560();
   }
      }
   }
}

Block make__42303640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42303640 = block;
   block->owner = (Object)__42305820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42303640;

   return block;
};

Block __42424260;

Block __42421040;

Block __42418540;

void code__42418540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = val_42166340___41804400_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__42418540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42418540 = block;
   block->owner = (Object)__42421040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42418540;

   return block;
};

Block __42448560;

void code__42448560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = val_42166340___41804400_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__42448560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42448560 = block;
   block->owner = (Object)__42421040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42448560;

   return block;
};

void code__42421040() {
{
      Value value = _5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47146840())) {
    code__42418540();
         }
         else if (value2integer(value) == value2integer(make__47146720())) {
    code__42448560();
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
                  src0 = _5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47146440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__42421040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42421040 = block;
   block->owner = (Object)__42424260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42421040;

   return block;
};

void code__42424260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_43264440_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47146960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42421040();
   }
      }
   }
}

Block make__42424260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42424260 = block;
   block->owner = (Object)__42305820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42424260;

   return block;
};

void code__42305820() {
 code__42303640();
 code__42424260();
}

Block make__42305820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42305820 = block;
   block->owner = (Object)__42209940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42305820;

   return block;
};

void code__42209940() {
 code__42208280();
 code__42252500();
   {
      Value cond = flag_43240060_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42305820();
   }
      }
   }
}

Block make__42209940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42209940 = block;
   block->owner = (Object)__42497220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42209940;

   return block;
};

Block __47152080;

void code__47152080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47146320(),val_42166340___41804400_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__47152080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47152080 = block;
   block->owner = (Object)__47151940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47152080;

   return block;
};

Value make__47147940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47147860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47147780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47147700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47147560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47147440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47147320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47147100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47146960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47146840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47146720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47146440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47146320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope __41804400;

SignalI val_42166340___41804400_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeval_42166340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_42166340___41804400_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__41804400;
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

Behavior __42497220;

Behavior make__42497220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42497220 = behavior;
   behavior->owner = (Object)__41804400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_pos += 1;
   clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->pos = realloc(clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->pos,clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_pos*sizeof(Object));
clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->pos[clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_pos-1] = (Object)behavior;
   behavior->block = make__42209940();

   return behavior;
}

Behavior __47151940;

Behavior make__47151940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47151940 = behavior;
   behavior->owner = (Object)__41804400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47152080();

   return behavior;
}

Scope make__41804400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __41804400 = scope;
   scope->owner = (Object)my__initializer_58_840_42495260;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeval_42166340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42497220();
   scope->behaviors[1] = make__47151940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__initializer_58_840_42495260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__initializer_58_840_42495260 = systemT;
systemT->owner = NULL;
   systemT->name = "my_initializer:T0";
   systemT->num_inputs = 2;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_43240080();
   systemT->inputs[1] = makeflag_43240060();
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__41804400();

   return systemT;
}