#include "m2c.h"
#include "engine.h"

void func_0204f5b0(M2C_UNK, M2C_UNK);

void func_0204f64c(s32 arg0, s32 arg1, s32 arg2) {
    func_0204f5b0(arg0, arg2 | (arg1 & (-0x1000 << ((u32) (arg2 - 0x16) >> 1))) | 1);
}
