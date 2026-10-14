#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02135460;

void func_0201ed40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3                         = (arg0 * 0x44) + (s32) &data_02135460;
    M2C_FIELD(temp_r3, s32 *, 0x10) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x14) = arg2;
}
