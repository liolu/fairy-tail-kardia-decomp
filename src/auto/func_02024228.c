#include "m2c.h"

s32 func_02021028(s32);                             /* extern */
s32 func_02021ac0(M2C_UNK, s32);                    /* extern */
s32 func_02021b28(M2C_UNK, s32);                    /* extern */
M2C_UNK func_02021e9c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02021ea4(M2C_UNK);                         /* extern */

s32 func_02024228(M2C_UNK arg0) {
    s32 var_r5;

    var_r5 = 0;
loop_1:
    if ((func_02021028(var_r5) != 2) || ((func_02021ac0(arg0, var_r5) != 0) && (func_02021b28(arg0, var_r5) != 0))) {
        var_r5 += 1;
        if (var_r5 < 0x14A) {
            goto loop_1;
        }
    }
    if ((var_r5 == 0x14A) && (func_02021ea4(arg0) == 0)) {
        func_02021e9c(arg0, 1);
    }
    return 1;
}
