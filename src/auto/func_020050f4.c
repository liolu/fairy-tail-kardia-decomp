#include "m2c.h"
#include "engine.h"

M2C_UNK func_020047c4(M2C_UNK);
M2C_UNK func_02005028(void);

s32 func_020050f4(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 >= 0) && (var_r0 < 0x64)) {
        var_r0 = func_02005028();
    }
    if (var_r0 == 0) {
        return 0;
    }
    if (func_020047c4(M2C_FIELD(var_r0, s32 *, 4)) != 0) {
        return 1;
    }
    return 0;
}
