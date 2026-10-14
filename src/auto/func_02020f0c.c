#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200554c(M2C_UNK, M2C_UNK);

s32 func_02020f0c(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD(((arg0 * 0x5C) + func_0200554c(3, 0x3DB) + (arg1 * 4)), s16 *, 0x48);
}
