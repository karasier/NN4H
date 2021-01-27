#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_847_59390060;

SignalI clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeclk_59420020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_847_59390060;
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

SignalI ack_59419960_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeack_59419960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59419960_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_847_59390060;
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

SignalI rst_59419900_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makerst_59419900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59419900_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_847_59390060;
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

SignalI ack__mac_59419740_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeack__mac_59419740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59419740_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_847_59390060;
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

Block __58901840;

Block __58923000;

void code__58923000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__145818500(),q_58902120_counter_58_84_58903260_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__145818180(),ack__mac_59419740_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__58923000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58923000 = block;
   block->owner = (Object)__58901840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58923000;

   return block;
};

Block __58918900;

Block __58918000;

Block __59372240;

void code__59372240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__145841740(),q_58902120_counter_58_84_58903260_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__145841680(),ack__mac_59419740_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__59372240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59372240 = block;
   block->owner = (Object)__58918000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59372240;

   return block;
};

void code__58918000() {
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
                  src0 = q_58902120_counter_58_84_58903260_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__145842060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),q_58902120_counter_58_84_58903260_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58902120_counter_58_84_58903260_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__145841820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59372240();
   }
      }
   }
}

Block make__58918000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58918000 = block;
   block->owner = (Object)__58918900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58918000;

   return block;
};

void code__58918900() {
 code__58918000();
}

Block make__58918900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58918900 = block;
   block->owner = (Object)__58901840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58918900;

   return block;
};

void code__58901840() {
   {
      Value cond = rst_59419900_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58923000();
   }
   else if (value2integer(ack_59419960_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value)) {
  code__58918900();
   }
      }
   }
}

Block make__58901840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58901840 = block;
   block->owner = (Object)__59368060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58901840;

   return block;
};

Value make__145818500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__145818180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__145842060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__145841820() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__145841740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__145841680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_58903260;

SignalI q_58902120_counter_58_84_58903260_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeq_58902120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_58902120_counter_58_84_58903260_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_84_58903260;
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

Behavior __59368060;

Behavior make__59368060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59368060 = behavior;
   behavior->owner = (Object)counter_58_84_58903260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_neg += 1;
   clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->neg = realloc(clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->neg,clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_neg*sizeof(Object));
clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->neg[clk_59420020_counter_58_847_59390060_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_neg-1] = (Object)behavior;
   behavior->block = make__58901840();

   return behavior;
}

Scope makecounter_58_84_58903260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_58903260 = scope;
   scope->owner = (Object)counter_58_847_59390060;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_58902120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59368060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_847_59390060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_847_59390060 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T7";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59420020();
   systemT->inputs[1] = makeack_59419960();
   systemT->inputs[2] = makerst_59419900();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_59419740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_58903260();

   return systemT;
}