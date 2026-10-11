#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200554c(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02134534;

void func_02015798(s32 arg0, s32 arg1, s32 arg2) {
    *((M2C_UNK *)((s8 *)&data_02134534 + (arg0 * 4))) = func_0200554c(arg1, arg2);
}
