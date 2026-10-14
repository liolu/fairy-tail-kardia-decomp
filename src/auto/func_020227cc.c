#include "engine.h"
#include "m2c.h"

M2C_UNK func_02021820(M2C_UNK);

s32 func_020227cc(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD((arg0 + func_02021820(0)), u8 *, 0x36C) & 2) {
        var_r4 = 1;
    }
    return var_r4;
}
