#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84380_106117420;

SignalI address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeaddress_106150820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84380_106117420;
   signalI->name = "address";
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

SignalI base_107167000_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makebase_107167000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_107167000_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84380_106117420;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
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

SignalI next__data_107805460_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makenext__data_107805460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_107805460_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84380_106117420;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
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

Block __77110360;

Block __102577840;

void code__102577840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(make__198046300());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_107805460_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__102577840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __102577840 = block;
   block->owner = (Object)__77110360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__102577840;

   return block;
};

Block __77108340;

Block __83988040;

void code__83988040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_107805460_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__83988040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83988040 = block;
   block->owner = (Object)__77108340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83988040;

   return block;
};

Block __77107320;

void code__77107320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__198043980();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_107805460_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__77107320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77107320 = block;
   block->owner = (Object)__77108340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77107320;

   return block;
};

void code__77108340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__198045220();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__198044800();
                     src1 = make__198044760();
                     src2 = make__198044740();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__83988040();
   }
   else {
  code__77107320();
   }
      }
   }
}

Block make__77108340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77108340 = block;
   block->owner = (Object)__77110360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77108340;

   return block;
};

void code__77110360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__198046500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__102577840();
   }
   else {
  code__77108340();
   }
      }
   }
}

Block make__77110360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77110360 = block;
   block->owner = (Object)__106118920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77110360;

   return block;
};

Block __198029960;

void code__198029960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_107167000_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__198029960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __198029960 = block;
   block->owner = (Object)__198027860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__198029960;

   return block;
};

Value make__198047800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047700() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047660() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047640() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047620() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047600() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047580() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047560() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047540() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047520() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047480() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047460() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047440() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047420() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047360() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198047340() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__198046500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__198046300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__198045220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__198044800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__198044760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__198044740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__198043980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8438_196460840;

SignalI lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makelut_55456960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8438_196460840;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__198047800();
         src1 = make__198047700();
         src2 = make__198047660();
         src3 = make__198047640();
         src4 = make__198047620();
         src5 = make__198047600();
         src6 = make__198047580();
         src7 = make__198047560();
         src8 = make__198047540();
         src9 = make__198047520();
         src10 = make__198047480();
         src11 = make__198047460();
         src12 = make__198047440();
         src13 = make__198047420();
         src14 = make__198047360();
         src15 = make__198047340();
         concat_value(16,0,dst,src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
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

Behavior __106118920;

Behavior make__106118920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __106118920 = behavior;
   behavior->owner = (Object)my__lut_58_8438_196460840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__77110360();

   return behavior;
}

Behavior __198027860;

Behavior make__198027860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __198027860 = behavior;
   behavior->owner = (Object)my__lut_58_8438_196460840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_106150820_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[lut_55456960_my__lut_58_8438_196460840_my__lut_58_84380_106117420_func7_58_842_195523940_func7_58_8420_145397000_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__198029960();

   return behavior;
}

Scope makemy__lut_58_8438_196460840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8438_196460840 = scope;
   scope->owner = (Object)my__lut_58_84380_106117420;
   scope->name = "my_lut:T38";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_55456960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__106118920();
   scope->behaviors[1] = make__198027860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84380_106117420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84380_106117420 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T380";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_106150820();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_107167000();
   systemT->outputs[1] = makenext__data_107805460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8438_196460840();

   return systemT;
}