#include "m2c.h"
#include "engine.h"

M2C_UNK func_020442bc(M2C_UNK);

s32 func_0205966c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (M2C_FIELD(arg0, u16 *, 0x810) * func_020442bc(arg1 & ((1 << arg3) - 1))) + arg2;
}
