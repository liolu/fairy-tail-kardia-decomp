#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021353ec;

void func_0201d328(s32 arg0, s32 arg1) {
    M2C_FIELD(((arg0 * 0x1C) + (s32) &data_021353ec), s32 *, 0x10) = arg1;
}
