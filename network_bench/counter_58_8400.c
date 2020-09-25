#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_57460680;

SignalI clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeclk_57483080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_8400_57460680;
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

SignalI ack_57483060_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack_57483060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_57483060_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_8400_57460680;
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

SignalI rst_57483040_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makerst_57483040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57483040_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_8400_57460680;
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

SignalI ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack__mac_57483000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_8400_57460680;
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

Block __57466240;

Block __57466000;

void code__57466000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59491260(),q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59491200(),ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__57466000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57466000 = block;
   block->owner = (Object)__57466240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57466000;

   return block;
};

Block __57465140;

void code__57465140() {
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
                  src0 = q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59490920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__57465140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57465140 = block;
   block->owner = (Object)__57466240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57465140;

   return block;
};

void code__57466240() {
   {
      Value cond = rst_57483040_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57466000();
   }
   else if (value2integer(ack_57483060_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value)) {
  code__57465140();
   }
      }
   }
}

Block make__57466240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57466240 = block;
   block->owner = (Object)__57464220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57466240;

   return block;
};

Block __57464100;

Block __57463680;

void code__57463680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59490540(),q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__57463680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57463680 = block;
   block->owner = (Object)__57464100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57463680;

   return block;
};

void code__57464100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59490640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57463680();
   }
      }
   }
}

Block make__57464100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57464100 = block;
   block->owner = (Object)__57462680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57464100;

   return block;
};

Block __57462560;

Block __57462140;

void code__57462140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59490360(),ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__57462140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57462140 = block;
   block->owner = (Object)__57462560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57462140;

   return block;
};

void code__57462560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59490440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57462140();
   }
      }
   }
}

Block make__57462560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57462560 = block;
   block->owner = (Object)__57461000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57462560;

   return block;
};

Value make__59491260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59491200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59490920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59490640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59490540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59490440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59490360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_57466800;

SignalI q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeq_57466360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_840_57466800;
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

Behavior __57464220;

Behavior make__57464220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57464220 = behavior;
   behavior->owner = (Object)counter_58_840_57466800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos += 1;
   clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos = realloc(clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos,clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos*sizeof(Object));
clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos[clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos-1] = (Object)behavior;
   behavior->block = make__57466240();

   return behavior;
}

Behavior __57462680;

Behavior make__57462680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57462680 = behavior;
   behavior->owner = (Object)counter_58_840_57466800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg += 1;
   clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg = realloc(clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg,clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg*sizeof(Object));
clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg[clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg-1] = (Object)behavior;
   behavior->block = make__57464100();

   return behavior;
}

Behavior __57461000;

Behavior make__57461000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57461000 = behavior;
   behavior->owner = (Object)counter_58_840_57466800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[q_57466360_counter_58_840_57466800_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__57462560();

   return behavior;
}

Scope makecounter_58_840_57466800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_57466800 = scope;
   scope->owner = (Object)counter_58_8400_57460680;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_57466360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57464220();
   scope->behaviors[1] = make__57462680();
   scope->behaviors[2] = make__57461000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_57460680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_57460680 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57483080();
   systemT->inputs[1] = makeack_57483060();
   systemT->inputs[2] = makerst_57483040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_57483000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_57466800();

   return systemT;
}