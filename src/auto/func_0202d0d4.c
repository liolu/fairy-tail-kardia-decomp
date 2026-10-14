#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213eba0;

void func_0202d0d4(s32 arg0) {
    M2C_FIELD(&data_0213eba0, s32 *, 0x38) = arg0;
    M2C_FIELD(&data_0213eba0, s32 *, 0x3C) = 0;
    M2C_FIELD(&data_0213eba0, s32 *, 0x40) = 0;
    M2C_FIELD(&data_0213eba0, s32 *, 0x50) = 0;
}
