#include "m2c.h"
#include "engine.h"

s32 func_020225f4(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (arg1 != 0) {
        if (arg1 == 1) {
            var_r0 = M2C_FIELD(var_r0, s32 *, 0x2F0);
        }
        return var_r0;
    }
    return M2C_FIELD(var_r0, s32 *, 0x2EC);
}
