/* compiler: 2.0/sp1p5 -flag opt_repositioncode */
#include "m2c.h"

s32 func_0202090c(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r0;

    var_r0  = arg0;
    temp_r1 = (arg1 - 5) * 2;
    if (var_r0 <= 0x10) {
        if (var_r0 < 0x10) {
            if (var_r0 == 0) {
                var_r0 = 4;
            }
            return var_r0;
        }
        return temp_r1 + 0xE3A;
    }
    if (var_r0 <= 0x20) {
        if (var_r0 == 0x20) {
            var_r0 = temp_r1 + 0xE3B;
        }
        return var_r0;
    }
    if (var_r0 == 0x30) {
        var_r0 = 0xE39;
    }
    return var_r0;
}
