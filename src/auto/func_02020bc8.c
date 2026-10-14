#include "engine.h"
#include "m2c.h"

M2C_UNK func_02020b6c(M2C_UNK, M2C_UNK);

s32 func_02020bc8(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) M2C_FIELD((func_02020b6c(arg0, arg1) + (arg2 * 4)), s8 *, 0xC);
}
