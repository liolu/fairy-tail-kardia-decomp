#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02133180;

void func_02014550(s32 arg0) {
    M2C_FIELD(&data_02133180, s32 *, 4) = arg0;
    M2C_FIELD(&data_02133180, s32 *, 8) = 0;
}
