#include "m2c.h"

s32 func_0203847c();                                /* extern */
s32 func_020388e4();                                /* extern */
M2C_UNK func_0203890c(M2C_UNK, s32);                /* extern */
s32 func_02039044(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02039440;

s32 func_020391c0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_020388e4();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_0203847c();
        }
        var_r4 = func_02039044(arg0, &func_02039440, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_0203890c(arg0, var_r4);
        }
    }
    return var_r4;
}
