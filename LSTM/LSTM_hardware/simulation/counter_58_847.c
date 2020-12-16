#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_847_82988520;

SignalI clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeclk_82985740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_847_82988520;
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

SignalI ack_82985720_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeack_82985720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_82985720_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_847_82988520;
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

SignalI rst_82985660_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makerst_82985660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_82985660_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_847_82988520;
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

SignalI ack__mac_82985620_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeack__mac_82985620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_82985620_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_847_82988520;
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

Block __82992540;

Block __82992220;

void code__82992220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__197410340(),q_82992680_counter_58_84_82788420_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__197410220(),ack__mac_82985620_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__82992220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82992220 = block;
   block->owner = (Object)__82992540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82992220;

   return block;
};

Block __82991440;

Block __82991160;

Block __82989980;

void code__82989980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__197409720(),q_82992680_counter_58_84_82788420_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__197409640(),ack__mac_82985620_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__82989980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82989980 = block;
   block->owner = (Object)__82991160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82989980;

   return block;
};

void code__82991160() {
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
                  src0 = q_82992680_counter_58_84_82788420_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__197409980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),q_82992680_counter_58_84_82788420_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_82992680_counter_58_84_82788420_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__197409840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__82989980();
   }
      }
   }
}

Block make__82991160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82991160 = block;
   block->owner = (Object)__82991440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82991160;

   return block;
};

void code__82991440() {
 code__82991160();
}

Block make__82991440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82991440 = block;
   block->owner = (Object)__82992540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82991440;

   return block;
};

void code__82992540() {
   {
      Value cond = rst_82985660_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__82992220();
   }
   else if (value2integer(ack_82985720_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value)) {
  code__82991440();
   }
      }
   }
}

Block make__82992540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82992540 = block;
   block->owner = (Object)__82988940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82992540;

   return block;
};

Value make__197410340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__197410220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__197409980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197409840() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197409720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__197409640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_82788420;

SignalI q_82992680_counter_58_84_82788420_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeq_82992680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_82992680_counter_58_84_82788420_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_84_82788420;
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

Behavior __82988940;

Behavior make__82988940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82988940 = behavior;
   behavior->owner = (Object)counter_58_84_82788420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->neg = realloc(clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->neg,clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->neg[clk_82985740_counter_58_847_82988520_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__82992540();

   return behavior;
}

Scope makecounter_58_84_82788420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_82788420 = scope;
   scope->owner = (Object)counter_58_847_82988520;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_82992680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__82988940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_847_82988520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_847_82988520 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T7";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_82985740();
   systemT->inputs[1] = makeack_82985720();
   systemT->inputs[2] = makerst_82985660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_82985620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_82788420();

   return systemT;
}