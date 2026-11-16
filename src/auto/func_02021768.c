/* compiler: 2.0/sp1p5 -flag opt_repositioncode */
#include "m2c.h"

s32 func_02021768(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r1;

    var_r0 = arg0;
    var_r1 = arg1;
    if (var_r1 == 0x3E7) {
        var_r1 = 0x12C;
    }
    if (var_r0 <= 0x10) {
        if (var_r0 < 0x10) {
            if (var_r0 == 0) {
                var_r0 = 4;
            }
            return var_r0;
        }
        return (var_r1 * 2) + 0x6D4;
    }
    if (var_r0 <= 0x20) {
        if (var_r0 == 0x20) {
            var_r0 = (var_r1 * 2) + 0x6D5;
        }
        return var_r0;
    }
    if (var_r0 == 0x30) {
        var_r0 = 0x6D3;
    }
    return var_r0;
}
