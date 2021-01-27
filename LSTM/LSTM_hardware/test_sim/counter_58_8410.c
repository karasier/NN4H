#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8410_53040240;

SignalI clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeclk_53632800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_8410_53040240;
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

SignalI ack_53632680_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeack_53632680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53632680_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_8410_53040240;
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

SignalI rst_53632200_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makerst_53632200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53632200_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_8410_53040240;
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

SignalI ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeack__mac_53631800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_8410_53040240;
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

Block __53283540;

Block __52681940;

void code__52681940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176371580(),q_53266420_counter_58_841_53251880_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__176371520(),ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__52681940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52681940 = block;
   block->owner = (Object)__53283540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52681940;

   return block;
};

Block __52701240;

Block __52721300;

Block __52875620;

void code__52875620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__176370780(),q_53266420_counter_58_841_53251880_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__176370720(),ack__mac_53631800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__52875620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52875620 = block;
   block->owner = (Object)__52721300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52875620;

   return block;
};

void code__52721300() {
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
                  src0 = q_53266420_counter_58_841_53251880_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__176371300();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),q_53266420_counter_58_841_53251880_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53266420_counter_58_841_53251880_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__176370980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52875620();
   }
      }
   }
}

Block make__52721300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52721300 = block;
   block->owner = (Object)__52701240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52721300;

   return block;
};

void code__52701240() {
 code__52721300();
}

Block make__52701240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52701240 = block;
   block->owner = (Object)__53283540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52701240;

   return block;
};

void code__53283540() {
   {
      Value cond = rst_53632200_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52681940();
   }
   else if (value2integer(ack_53632680_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value)) {
  code__52701240();
   }
      }
   }
}

Block make__53283540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53283540 = block;
   block->owner = (Object)__53023280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53283540;

   return block;
};

Value make__176371580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__176371520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__176371300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176370980() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176370780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__176370720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_841_53251880;

SignalI q_53266420_counter_58_841_53251880_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeq_53266420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53266420_counter_58_841_53251880_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_841_53251880;
   signalI->name = "q";
   signalI->type = get_type_vector(get_type_bit(),4);
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

Behavior __53023280;

Behavior make__53023280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53023280 = behavior;
   behavior->owner = (Object)counter_58_841_53251880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg += 1;
   clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg = realloc(clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg,clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg*sizeof(Object));
clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->neg[clk_53632800_counter_58_8410_53040240_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_neg-1] = (Object)behavior;
   behavior->block = make__53283540();

   return behavior;
}

Scope makecounter_58_841_53251880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_841_53251880 = scope;
   scope->owner = (Object)counter_58_8410_53040240;
   scope->name = "counter:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53266420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53023280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8410_53040240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8410_53040240 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53632800();
   systemT->inputs[1] = makeack_53632680();
   systemT->inputs[2] = makerst_53632200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53631800();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_841_53251880();

   return systemT;
}