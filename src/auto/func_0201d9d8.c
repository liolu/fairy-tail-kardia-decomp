#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02135424;

void func_0201d9d8(s32 arg0, s32 arg1) {
    M2C_FIELD(((arg0 * 0x1C) + (s32) &data_02135424), s32 *, 0x18) = (s32) (arg1 << 0xC);
}
