#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02133180;

void func_02014fa8(s32 arg0) {
    M2C_FIELD(&data_02133180, s32 *, 0x20) = arg0;
}
