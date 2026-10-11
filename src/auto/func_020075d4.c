#include "m2c.h"
#include "engine.h"

M2C_UNK func_02003630(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0208c940;

void func_020075d4(s32 arg0) {
    M2C_FIELD(&data_0208c940, s32 *, 0x8C) = func_02003630(1, 0x20, arg0 * 8);
    M2C_FIELD(&data_0208c940, s32 *, 0x90) = arg0;
}
