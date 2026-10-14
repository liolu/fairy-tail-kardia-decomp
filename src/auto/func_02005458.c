#include "engine.h"
#include "m2c.h"

M2C_UNK func_020047c4(M2C_UNK);
M2C_UNK func_020052c8(M2C_UNK);

s32 func_02005458(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 >= 0) && (var_r0 < 0x64)) {
        var_r0 = func_020052c8(var_r0);
    }
    if ((var_r0 != 0) && (M2C_FIELD(var_r0, s32 *, 0xC) == 1)) {
        return func_020047c4(M2C_FIELD(var_r0, s32 *, 0x10));
    }
    return 0;
}
