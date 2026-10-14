#include "engine.h"
#include "m2c.h"

M2C_UNK func_02022854(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_02025788(s32 arg0) {
    s32 var_r5;
    s32 var_r6;

    var_r5 = 0;
loop_1:
    var_r6 = 0;
loop_2:
    if (func_02022854(arg0, var_r5, var_r6) == 0) {
        return 0;
    }
    var_r6 += 1;
    if (var_r6 >= 5) {
        var_r5 += 1;
        if (var_r5 >= 0x23) {
            return 1;
        }
        goto loop_1;
    }
    goto loop_2;
}
