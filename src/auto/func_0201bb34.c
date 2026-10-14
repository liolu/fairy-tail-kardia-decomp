#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02135388;

void func_0201bb34(s32 arg0) {
    M2C_FIELD(&data_02135388, s32 *, 0x10) = arg0;
    M2C_FIELD(&data_02135388, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02135388, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02135388, s32 *, 0x1C) = 1;
}
