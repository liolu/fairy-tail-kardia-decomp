#include "engine.h"
#include "m2c.h"

M2C_UNK func_020229ac(M2C_UNK, M2C_UNK);

s32 func_02025ee4(s32 arg0) {
    s32 var_r0;
    s32 var_r4;
    s32 var_r5;

    var_r5 = 1;
    var_r4 = 0;
loop_1:
    if ((var_r4 != 0) && (var_r4 != 7)) {
        if (func_020229ac(arg0, var_r4) == 0) {
            var_r5 = 0;
        } else {
            goto block_7;
        }
    } else {
    block_7:
        var_r4 += 1;
        if (var_r4 < 0x17) {
            goto loop_1;
        }
    }
    var_r0 = 1;
    if (var_r5 != 1) {
        var_r0 = 0;
    }
    return var_r0;
}
