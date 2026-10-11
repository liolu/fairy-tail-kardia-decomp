#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213e204;

void func_0202ba8c(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0213e204, s32 *, 0x7C) = arg0;
    M2C_FIELD(&data_0213e204, s32 *, 0x80) = arg1;
}
