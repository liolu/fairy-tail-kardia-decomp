/* compiler: 2.0/sp1p5 -flag opt_repositioncode */
#include "m2c.h"

s32 func_02020600(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 var_r0;

    var_r0  = arg0;
    temp_r1 = (arg3 * 3) + ((arg1 * 0xC) + (arg2 * 6));
    if (var_r0 <= 0x10) {
        if (var_r0 < 0x10) {
            if (var_r0 == 0) {
                var_r0 = 4;
            }
            return var_r0;
        }
        return temp_r1 + 0x1A2;
    }
    if (var_r0 <= 0x20) {
        if (var_r0 == 0x20) {
            var_r0 = temp_r1 + 0x1A3;
        }
        return var_r0;
    }
    if (var_r0 == 0x30) {
        var_r0 = temp_r1 + 0x1A4;
    }
    return var_r0;
}
