#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02134180;

void func_02014f34(s32 arg0) {
    M2C_FIELD(&data_02134180, s32 *, 0x9C) = arg0;
}
