
#include "hermes/VM/static_h.h"

#include <stdlib.h>

#include <stdlib.h>


static uint32_t unit_index;
static inline SHSymbolID* get_symbols(SHUnit *);
static inline SHPropertyCacheEntry* get_prop_cache(SHUnit *);
static const SHSrcLoc s_source_locations[];
static SHNativeFuncInfo s_function_info_table[];
static SHLegacyValue _0_global(SHRuntime *shr);
// getenv.js:8:1
static SHLegacyValue _0_global(SHRuntime *shr) {
  _SH_MODEL();
  struct {
    SHLocals head;
    SHLegacyValue t0;
    SHLegacyValue t1;
    SHLegacyValue t2;
  } locals;
  _sh_check_native_stack_overflow(shr);
  SHLegacyValue *frame = _sh_enter(shr, &locals.head, 11);
  locals.head.count =3;
  SHUnit *shUnit = shr->units[unit_index];
  locals.t0 = _sh_ljs_undefined();
  locals.t1 = _sh_ljs_undefined();
  locals.t2 = _sh_ljs_undefined();
  SHLegacyValue np0 = _sh_ljs_undefined();
  SHLegacyValue np1 = _sh_ljs_undefined();
  SHLegacyValue np2 = _sh_ljs_undefined();
  SHLegacyValue np3 = _sh_ljs_undefined();
  SHLegacyValue np4 = _sh_ljs_undefined();
  SHLegacyValue np5 = _sh_ljs_undefined();
  SHLegacyValue np6 = _sh_ljs_undefined();
  SHLegacyValue np7 = _sh_ljs_undefined();
  SHLegacyValue np8 = _sh_ljs_undefined();
  SHLegacyValue np9 = _sh_ljs_undefined();
  SHJmpBuf jmpBuf0;

L0:
  ;
  // AllocStackInst
  // AllocStackInst
  // AllocStackInst
  locals.t0 = _sh_ljs_get_string(shr, get_symbols(shUnit)[1] /*PATH*/);
  locals.t2 = _sh_ljs_get_by_id_rjs(shr,&locals.t0,get_symbols(shUnit)[2] /*length*/, get_prop_cache(shUnit) + 0);
  np8 = _sh_ljs_double(1);
  locals.t2 = _sh_ljs_add_rjs(shr, &locals.t2, &np8);
  if (!(_sh_ljs_is_double(locals.t2))) _sh_throw_type_error_ascii(shr, "Checked cast failed");
  np0 = locals.t2;
  np0 = _sh_ljs_native_pointer_or_throw(shr, malloc(_sh_to_uint64_double_or_throw(shr, _sh_ljs_get_double(np0))));
  np7 = _sh_ljs_double(0);
  np1 = _sh_ljs_bool(_sh_ljs_get_double(np0) == _sh_ljs_get_double(np7));
  if(_sh_ljs_get_bool(np1)) goto L17;
  goto L1;

L1:
  ;
  if(_sh_try(shr, &jmpBuf0) == 0) goto L2;
  goto L16;

L2:
  ;
  np2 = _sh_ljs_double(0);
  np1 = _sh_ljs_undefined();
  locals.t1 = _sh_ljs_undefined();
  locals.t2 = _sh_ljs_get_by_id_rjs(shr,&locals.t0,get_symbols(shUnit)[2] /*length*/, get_prop_cache(shUnit) + 1);
  locals.t1 = locals.t2;
  np3 = _sh_ljs_bool(_sh_ljs_less_rjs(shr, &np7, &locals.t2));
  np6 = _sh_ljs_double(127);
  if(_sh_ljs_get_bool(np3)) goto L3;
  goto L5;

L3:
  ;
  np4 = _sh_ljs_undefined();
  frame[4] = _sh_ljs_get_by_id_rjs(shr,&locals.t0,get_symbols(shUnit)[3] /*charCodeAt*/, get_prop_cache(shUnit) + 2);
  frame[2] = np2;
  frame[5] = _sh_ljs_undefined();
  frame[3] = locals.t0;
  locals.t2 = _sh_ljs_call(shr, frame, 1);
  if (!(_sh_ljs_is_double(locals.t2))) _sh_throw_type_error_ascii(shr, "Checked cast failed");
  np3 = locals.t2;
  np4 = np3;
  np3 = _sh_ljs_bool(_sh_ljs_get_double(np3) > _sh_ljs_get_double(np6));
  if(_sh_ljs_get_bool(np3)) goto L15;
  goto L4;

L4:
  ;
  np3 = np2;
  np5 = np4;
  if (!(_sh_ljs_is_double(np5))) _sh_throw_type_error_ascii(shr, "Checked cast failed");
  _sh_ptr_write_char(_sh_ljs_get_native_pointer(np0), (int)_sh_to_int32_double(_sh_ljs_get_double(np3)), (char)_sh_to_int32_double(_sh_ljs_get_double(np5)));
  np5 = _sh_ljs_undefined();
  np3 = _sh_ljs_double(_sh_ljs_get_double(np3) + _sh_ljs_get_double(np8));
  np2 = np3;
  locals.t2 = locals.t1;
  np3 = _sh_ljs_bool(_sh_ljs_less_rjs(shr, &np3, &locals.t2));
  if(_sh_ljs_get_bool(np3)) goto L3;
  goto L5;

L5:
  ;
  np2 = np2;
  _sh_ptr_write_char(_sh_ljs_get_native_pointer(np0), (int)_sh_to_int32_double(_sh_ljs_get_double(np2)), (char)_sh_to_int32_double(_sh_ljs_get_double(np7)));
  np2 = _sh_ljs_undefined();
  _sh_end_try(shr, &jmpBuf0);
  goto L6;
L6:
  ;
  if(_sh_try(shr, &jmpBuf0) == 0) goto L7;
  goto L14;

L7:
  ;
  np5 = _sh_ljs_native_pointer_or_throw(shr, getenv(_sh_ljs_get_native_pointer(np0)));
  locals.t0 = _sh_ljs_get_string(shr, get_symbols(shUnit)[0] /**/);
  np4 = _sh_ljs_double(2048);
  np3 = _sh_ljs_double(0);
  goto L8;
L8:
  ;
  // PhiInst
  // PhiInst
  np2 = _sh_ljs_double((double)(unsigned char)_sh_ptr_read_uchar(_sh_ljs_get_native_pointer(np5), (int)_sh_to_int32_double(_sh_ljs_get_double(np3))));
  np9 = _sh_ljs_bool(_sh_ljs_get_double(np2) > _sh_ljs_get_double(np6));
  if(_sh_ljs_get_bool(np9)) goto L13;
  goto L9;

L9:
  ;
  np9 = _sh_ljs_bool(_sh_ljs_get_double(np2) == _sh_ljs_get_double(np7));
  locals.t1 = locals.t0;
  if(_sh_ljs_get_bool(np9)) goto L11;
  goto L10;

L10:
  ;
  // ImplicitMovInst
  // ImplicitMovInst
  // ImplicitMovInst
  frame[2] = np2;
  locals.t2 = _sh_ljs_call_builtin(shr, frame, 1, 38);
  locals.t0 = _sh_ljs_add_rjs(shr, &locals.t0, &locals.t2);
  np3 = _sh_ljs_double(_sh_ljs_get_double(np3) + _sh_ljs_get_double(np8));
  np2 = _sh_ljs_bool(_sh_ljs_get_double(np3) < _sh_ljs_get_double(np4));
  locals.t1 = locals.t0;
  if(_sh_ljs_get_bool(np2)) goto L8;
  goto L11;

L11:
  ;
  // PhiInst
  _sh_end_try(shr, &jmpBuf0);
  goto L12;
L12:
  ;
  free(_sh_ljs_get_native_pointer(np0));
  np2 = _sh_ljs_undefined();
  locals.t0 = _sh_ljs_get_global_object(shr);
  frame[4] = _sh_ljs_try_get_by_id_rjs(shr,&locals.t0, get_symbols(shUnit)[4] /*print*/, get_prop_cache(shUnit) + 3);
  frame[5] = _sh_ljs_undefined();
  frame[3] = _sh_ljs_undefined();
  frame[2] = locals.t1;
  locals.t0 = _sh_ljs_call(shr, frame, 1);
  _sh_leave(shr, &locals.head, frame);
  return np1;

L13:
  ;
  locals.t0 = _sh_ljs_get_global_object(shr);
  frame[4] = _sh_ljs_try_get_by_id_rjs(shr,&locals.t0, get_symbols(shUnit)[5] /*Error*/, get_prop_cache(shUnit) + 4);
  frame[2] = _sh_ljs_get_string(shr, get_symbols(shUnit)[6] /*String is not ASCII*/);
  frame[5] = _sh_ljs_undefined();
  frame[3] = _sh_ljs_undefined();
  locals.t0 = _sh_ljs_call(shr, frame, 1);
  _sh_throw(shr, locals.t0);

L14:
  ;
  locals.t0 = _sh_catch(shr, (SHLocals*)&locals, frame, 11);
  free(_sh_ljs_get_native_pointer(np0));
  np2 = _sh_ljs_undefined();
  _sh_throw(shr, locals.t0);

L15:
  ;
  locals.t0 = _sh_ljs_get_global_object(shr);
  frame[4] = _sh_ljs_try_get_by_id_rjs(shr,&locals.t0, get_symbols(shUnit)[5] /*Error*/, get_prop_cache(shUnit) + 5);
  frame[2] = _sh_ljs_get_string(shr, get_symbols(shUnit)[6] /*String is not ASCII*/);
  frame[5] = _sh_ljs_undefined();
  frame[3] = _sh_ljs_undefined();
  locals.t0 = _sh_ljs_call(shr, frame, 1);
  _sh_throw(shr, locals.t0);

L16:
  ;
  locals.t0 = _sh_catch(shr, (SHLocals*)&locals, frame, 11);
  free(_sh_ljs_get_native_pointer(np0));
  np0 = _sh_ljs_undefined();
  _sh_throw(shr, locals.t0);

L17:
  ;
  locals.t0 = _sh_ljs_get_global_object(shr);
  frame[4] = _sh_ljs_try_get_by_id_rjs(shr,&locals.t0, get_symbols(shUnit)[5] /*Error*/, get_prop_cache(shUnit) + 6);
  np0 = _sh_ljs_undefined();
  frame[2] = _sh_ljs_get_string(shr, get_symbols(shUnit)[7] /*OOM*/);
  frame[5] = _sh_ljs_undefined();
  frame[3] = _sh_ljs_undefined();
  locals.t0 = _sh_ljs_call(shr, frame, 1);
  _sh_throw(shr, locals.t0);
}
static unsigned char s_literal_val_buffer[0] = {};
static unsigned char s_obj_key_buffer[0] = {};
static const SHShapeTableEntry s_obj_shape_table[] = {
};

static const SHSrcLoc s_source_locations[] = {
  { .filename_idx = 0, .line = 0, .column = 0 },
};

static SHNativeFuncInfo s_function_info_table[] = {
  { .name_index = 8, .arg_count = 0, .prohibit_invoke = 2, .kind = 0 },
};
static const char s_ascii_pool[] = {
  '\0',
  'P', 'A', 'T', 'H', '\0',
  'l', 'e', 'n', 'g', 't', 'h', '\0',
  'c', 'h', 'a', 'r', 'C', 'o', 'd', 'e', 'A', 't', '\0',
  'p', 'r', 'i', 'n', 't', '\0',
  'E', 'r', 'r', 'o', 'r', '\0',
  'S', 't', 'r', 'i', 'n', 'g', ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 'A', 'S', 'C', 'I', 'I', '\0',
  'O', 'O', 'M', '\0',
  'g', 'l', 'o', 'b', 'a', 'l', '\0',
};
static const char16_t s_u16_pool[] = {
};
static const uint32_t s_strings[] = {0,0,0,1,4,528947866,6,6,363462486,13,10,360288817,24,5,2794059355,30,5,2432869328,36,19,1625006665,56,3,3814227266,60,6,615793799,};
#define CREATE_THIS_UNIT sh_export_this_unit
struct UnitData {
  SHUnit unit;
  SHSymbolID symbol_data[9];
  SHPropertyCacheEntry prop_cache_data[7];
;  SHCompressedPointer object_literal_class_cache[0];
};
SHUnit *CREATE_THIS_UNIT(SHRuntime *shr) {
  struct UnitData *unit_data = calloc(sizeof(struct UnitData), 1);
  *unit_data = (struct UnitData){.unit = {.index = &unit_index,.num_symbols =9, .num_prop_cache_entries = 7, .ascii_pool = s_ascii_pool, .u16_pool = s_u16_pool,.strings = s_strings, .symbols = unit_data->symbol_data,.prop_cache = unit_data->prop_cache_data,.obj_key_buffer = s_obj_key_buffer, .obj_key_buffer_size = 0, .literal_val_buffer = s_literal_val_buffer, .literal_val_buffer_size = 0, .obj_shape_table = s_obj_shape_table, .obj_shape_table_count = 0, .object_literal_class_cache = unit_data->object_literal_class_cache, .source_locations = s_source_locations, .source_locations_size = 1, .unit_main = _0_global, .unit_main_info = &s_function_info_table[0], .unit_name = "sh_compiled" }};
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
