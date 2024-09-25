
#include "hermes/VM/static_h.h"

#include <stdlib.h>


static uint32_t unit_index;
static inline SHSymbolID* get_symbols(SHUnit *);
static inline SHPropertyCacheEntry* get_prop_cache(SHUnit *);
static const SHSrcLoc s_source_locations[];
static SHNativeFuncInfo s_function_info_table[];
static SHLegacyValue _0_global(SHRuntime *shr);
SHLegacyValue _1_fib(SHRuntime *shr);
// fib.ts:1:1
static SHLegacyValue _0_global(SHRuntime *shr) {
  _SH_MODEL();
  struct {
    SHLocals head;
    SHLegacyValue t0;
    SHLegacyValue t1;
  } locals;
  _sh_check_native_stack_overflow(shr);
  SHLegacyValue *frame = _sh_enter(shr, &locals.head, 2);
  locals.head.count =2;
  SHUnit *shUnit = shr->units[unit_index];
  locals.t0 = _sh_ljs_undefined();
  locals.t1 = _sh_ljs_undefined();
  SHLegacyValue np0 = _sh_ljs_undefined();

L0:
  ;
  locals.t0 = _sh_ljs_create_environment(shr, NULL, 0);
  locals.t1 = _sh_ljs_create_environment(shr, &locals.t0, 1);
  locals.t0 = _sh_ljs_create_closure(shr, &locals.t1, _1_fib, &s_function_info_table[1], shUnit);
  _sh_ljs_store_to_env(shr, locals.t1,locals.t0, 0);
  np0 = _sh_ljs_undefined();
  _sh_leave(shr, &locals.head, frame);
  return np0;
}
// fib.ts:1:1
__attribute__((used, visibility("default"))) SHLegacyValue _1_fib(SHRuntime *shr) {
  struct {
    SHLocals head;
    SHLegacyValue t0;
  } locals;
  _sh_check_native_stack_overflow(shr);
  SHLegacyValue *frame = _sh_enter(shr, &locals.head, 11);
  locals.head.count =1;
  SHUnit *shUnit = shr->units[unit_index];
  locals.t0 = _sh_ljs_undefined();
  SHLegacyValue np0 = _sh_ljs_undefined();
  SHLegacyValue np1 = _sh_ljs_undefined();
  SHLegacyValue np2 = _sh_ljs_undefined();
  SHLegacyValue np3 = _sh_ljs_undefined();
  SHLegacyValue np4 = _sh_ljs_undefined();

L0:
  ;
  np4 = _sh_ljs_param(frame, 1);
  np0 = _sh_ljs_double(2);
  np1 = _sh_ljs_bool(_sh_ljs_get_double(np4) < _sh_ljs_get_double(np0));
  if(_sh_ljs_get_bool(np1)) goto L2;
  goto L1;

L1:
  ;
  locals.t0 = _sh_ljs_get_env_from_closure(shr, frame[-7]);  locals.t0 = _sh_ljs_load_from_env(locals.t0, 0);
  np3 = _sh_ljs_undefined();
  frame[2] = _sh_ljs_double(_sh_ljs_get_double(np4) - _sh_ljs_get_double(np0));
  frame[5] = _sh_ljs_undefined();
  frame[4] = locals.t0;
  frame[3] = _sh_ljs_double(0);
  frame[10] = _sh_ljs_native_pointer(frame);
  frame[9] = _sh_ljs_native_pointer((void*)0);
  frame[8] = _sh_ljs_native_pointer((void*)0);
  frame[7] = _sh_ljs_native_pointer((void*)0);
  frame[6] = _sh_ljs_native_uint32(1);
  np1 = _1_fib(shr);
  np0 = _sh_ljs_double(1);
  frame[2] = _sh_ljs_double(_sh_ljs_get_double(np4) - _sh_ljs_get_double(np0));
  frame[5] = _sh_ljs_undefined();
  frame[4] = locals.t0;
  frame[3] = _sh_ljs_double(0);
  frame[10] = _sh_ljs_native_pointer(frame);
  frame[9] = _sh_ljs_native_pointer((void*)0);
  frame[8] = _sh_ljs_native_pointer((void*)0);
  frame[7] = _sh_ljs_native_pointer((void*)0);
  frame[6] = _sh_ljs_native_uint32(1);
  np0 = _1_fib(shr);
  np0 = _sh_ljs_double(_sh_ljs_get_double(np1) + _sh_ljs_get_double(np0));
  _sh_leave(shr, &locals.head, frame);
  return np0;

L2:
  ;
  np0 = _sh_ljs_double(1);
  _sh_leave(shr, &locals.head, frame);
  return np0;
}
static unsigned char s_literal_val_buffer[0] = {};
static unsigned char s_obj_key_buffer[0] = {};
static const SHShapeTableEntry s_obj_shape_table[] = {
};

static const SHSrcLoc s_source_locations[] = {
  { .filename_idx = 0, .line = 0, .column = 0 },
};

static SHNativeFuncInfo s_function_info_table[] = {
  { .name_index = 1, .arg_count = 0, .prohibit_invoke = 2, .kind = 0 },
  { .name_index = 2, .arg_count = 1, .prohibit_invoke = 2, .kind = 0 },
};
static const char s_ascii_pool[] = {
  '\0',
  'g', 'l', 'o', 'b', 'a', 'l', '\0',
  'f', 'i', 'b', '\0',
};
static const char16_t s_u16_pool[] = {
};
static const uint32_t s_strings[] = {0,0,0,1,6,615793799,8,3,2473893398,};
#define CREATE_THIS_UNIT sh_export_this_unit
struct UnitData {
  SHUnit unit;
  SHSymbolID symbol_data[3];
  SHPropertyCacheEntry prop_cache_data[0];
;  SHCompressedPointer object_literal_class_cache[0];
};
SHUnit *CREATE_THIS_UNIT(SHRuntime *shr) {
  struct UnitData *unit_data = calloc(sizeof(struct UnitData), 1);
  *unit_data = (struct UnitData){.unit = {.index = &unit_index,.num_symbols =3, .num_prop_cache_entries = 0, .ascii_pool = s_ascii_pool, .u16_pool = s_u16_pool,.strings = s_strings, .symbols = unit_data->symbol_data,.prop_cache = unit_data->prop_cache_data,.obj_key_buffer = s_obj_key_buffer, .obj_key_buffer_size = 0, .literal_val_buffer = s_literal_val_buffer, .literal_val_buffer_size = 0, .obj_shape_table = s_obj_shape_table, .obj_shape_table_count = 0, .object_literal_class_cache = unit_data->object_literal_class_cache, .source_locations = s_source_locations, .source_locations_size = 1, .unit_main = _0_global, .unit_main_info = &s_function_info_table[0], .unit_name = "sh_compiled" }};
  return (SHUnit *)unit_data;
}

SHSymbolID *get_symbols(SHUnit *unit) {
  return ((struct UnitData *)unit)->symbol_data;
}

SHPropertyCacheEntry *get_prop_cache(SHUnit *unit) {
  return ((struct UnitData *)unit)->prop_cache_data;
}

void init_console_bindings(SHRuntime *shr);

int main(int argc, char **argv) {
  SHRuntime *shr = _sh_init(argc, argv);
  init_console_bindings(shr);
  bool success = _sh_initialize_units(shr, 1, CREATE_THIS_UNIT);
  _sh_done(shr);
  return success ? 0 : 1;
}
