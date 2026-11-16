/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

M2C_UNK func_02050414();                            /* extern */
extern M2C_UNK data_0205f5b4;

M2C_UNK *func_0203b924(s32 arg0) {
    M2C_UNK *var_r4;
    s32 var_r1;

    var_r4 = NULL;
    if (arg0 & 0x10) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if ((u32) (arg0 & ~0x10) <= 3U) {
        if (var_r1 == 0) {
            var_r4 = &data_0205f5b4;
        } else {
            func_02050414();
        }
    }
    return var_r4;
}
