#include "m2c.h"

s32 func_02021820(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (arg0 == 0) {
        if (var_r1 >= 0x23) {
            var_r1 -= 0x41;
        }
    } else {
        var_r1 = 0;
    }
    return var_r1;
}
