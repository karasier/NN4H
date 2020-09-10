#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_48700820;

SignalI address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeaddress_48698480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)my__lut_58_842_48700820;
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

SignalI base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makebase_52473380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)my__lut_58_842_48700820;
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

SignalI next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makenext__data_52618260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)my__lut_58_842_48700820;
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

Block __45901360;

Block __49999840;

void code__49999840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            idx = value2integer(make__60054400());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49999840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49999840 = block;
   block->owner = (Object)__45901360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49999840;

   return block;
};

Block __45900540;

Block __49577260;

void code__49577260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            idx = value2integer(address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49577260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49577260 = block;
   block->owner = (Object)__45900540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49577260;

   return block;
};

Block __45899960;

void code__45899960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__60053140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__45899960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45899960 = block;
   block->owner = (Object)__45900540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45899960;

   return block;
};

void code__45900540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__60053960();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__60053680();
                     src1 = make__60053660();
                     src2 = make__60053640();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49577260();
   }
   else {
  code__45899960();
   }
      }
   }
}

Block make__45900540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45900540 = block;
   block->owner = (Object)__45901360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45900540;

   return block;
};

void code__45901360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60054560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49999840();
   }
   else {
  code__45900540();
   }
      }
   }
}

Block make__45901360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45901360 = block;
   block->owner = (Object)__48701140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45901360;

   return block;
};

Block __60033880;

void code__60033880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            idx = value2integer(address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60033880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60033880 = block;
   block->owner = (Object)__60032800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60033880;

   return block;
};

Value make__60055200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055180() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055080() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055040() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055020() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60055000() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60054980() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60054960() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60054940() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60054920() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60054900() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60054560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60054400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60053960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60053680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60053660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60053640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60053140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_53816480;

SignalI lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelut_54563000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)my__lut_58_84_53816480;
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
         src0 = make__60055200();
         src1 = make__60055180();
         src2 = make__60055160();
         src3 = make__60055140();
         src4 = make__60055120();
         src5 = make__60055100();
         src6 = make__60055080();
         src7 = make__60055060();
         src8 = make__60055040();
         src9 = make__60055020();
         src10 = make__60055000();
         src11 = make__60054980();
         src12 = make__60054960();
         src13 = make__60054940();
         src14 = make__60054920();
         src15 = make__60054900();
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

Behavior __48701140;

Behavior make__48701140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48701140 = behavior;
   behavior->owner = (Object)my__lut_58_84_53816480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__45901360();

   return behavior;
}

Behavior __60032800;

Behavior make__60032800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60032800 = behavior;
   behavior->owner = (Object)my__lut_58_84_53816480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[lut_54563000_my__lut_58_84_53816480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60033880();

   return behavior;
}

Scope makemy__lut_58_84_53816480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_53816480 = scope;
   scope->owner = (Object)my__lut_58_842_48700820;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_54563000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48701140();
   scope->behaviors[1] = make__60032800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_48700820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_48700820 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_48698480();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52473380();
   systemT->outputs[1] = makenext__data_52618260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_53816480();

   return systemT;
}