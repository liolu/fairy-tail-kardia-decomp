/* compiler: 2.0/sp1p5 -flag opt_repositioncode */
#include "m2c.h"

s32 func_020217c8(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r1;

    var_r0 = arg0;
    if (arg1 == 0x3E7) {
        var_r1 = 0;
    } else {
        var_r1 = arg1 + 1;
    }
    if (var_r0 <= 0x10) {
        if (var_r0 < 0x10) {
            if (var_r0 == 0) {
                var_r0 = 4;
            }
            return var_r0;
        }
        return 0x92F;
    }
    if (var_r0 <= 0x20) {
        if (var_r0 == 0x20) {
            var_r0 = var_r1 + 0x930;
        }
        return var_r0;
    }
    if (var_r0 == 0x30) {
        var_r0 = 0x92E;
    }
    return var_r0;
}
