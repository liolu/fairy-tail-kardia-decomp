/* compiler: 2.0/sp1p5 -flag opt_repositioncode */
#include "m2c.h"

s32 func_020215a0(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 <= 0x10) {
        if (var_r0 < 0x10) {
            if (var_r0 == 0) {
                var_r0 = 4;
            }
            return var_r0;
        }
        return (arg1 * 2) + 0x693;
    }
    if (var_r0 <= 0x20) {
        if (var_r0 == 0x20) {
            var_r0 = (arg1 * 2) + 0x694;
        }
        return var_r0;
    }
    if (var_r0 == 0x30) {
        var_r0 = 0x692;
    }
    return var_r0;
}
