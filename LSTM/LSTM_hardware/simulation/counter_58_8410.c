#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8410_107092500;

SignalI clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeclk_107089720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8410_107092500;
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

SignalI ack_107089700_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeack_107089700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_107089700_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8410_107092500;
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

SignalI rst_107089680_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makerst_107089680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_107089680_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8410_107092500;
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

SignalI ack__mac_107089640_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeack__mac_107089640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_107089640_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8410_107092500;
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

Block __107006840;

Block __107006580;

void code__107006580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__204740380(),q_107007320_counter_58_841_107007920_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__204740300(),ack__mac_107089640_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__107006580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107006580 = block;
   block->owner = (Object)__107006840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107006580;

   return block;
};

Block __107005540;

Block __107005260;

Block __107004160;

void code__107004160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__204739700(),q_107007320_counter_58_841_107007920_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__204739560(),ack__mac_107089640_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__107004160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107004160 = block;
   block->owner = (Object)__107005260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107004160;

   return block;
};

void code__107005260() {
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
                  src0 = q_107007320_counter_58_841_107007920_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__204740040();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),q_107007320_counter_58_841_107007920_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_107007320_counter_58_841_107007920_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__204739880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__107004160();
   }
      }
   }
}

Block make__107005260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107005260 = block;
   block->owner = (Object)__107005540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107005260;

   return block;
};

void code__107005540() {
 code__107005260();
}

Block make__107005540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107005540 = block;
   block->owner = (Object)__107006840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107005540;

   return block;
};

void code__107006840() {
   {
      Value cond = rst_107089680_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__107006580();
   }
   else if (value2integer(ack_107089700_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value)) {
  code__107005540();
   }
      }
   }
}

Block make__107006840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107006840 = block;
   block->owner = (Object)__107092880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107006840;

   return block;
};

Value make__204740380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__204740300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__204740040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__204739880() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__204739700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__204739560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_841_107007920;

SignalI q_107007320_counter_58_841_107007920_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeq_107007320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_107007320_counter_58_841_107007920_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_841_107007920;
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

Behavior __107092880;

Behavior make__107092880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __107092880 = behavior;
   behavior->owner = (Object)counter_58_841_107007920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->neg = realloc(clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->neg,clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->neg[clk_107089720_counter_58_8410_107092500_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__107006840();

   return behavior;
}

Scope makecounter_58_841_107007920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_841_107007920 = scope;
   scope->owner = (Object)counter_58_8410_107092500;
   scope->name = "counter:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_107007320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__107092880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8410_107092500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8410_107092500 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_107089720();
   systemT->inputs[1] = makeack_107089700();
   systemT->inputs[2] = makerst_107089680();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_107089640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_841_107007920();

   return systemT;
}