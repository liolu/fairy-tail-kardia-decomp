#include "m2c.h"

extern M2C_UNK data_020864a8;

s16 func_0201f87c(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 == 0x23) {
        var_r2 = 0;
    }
    return *((u16 *) ((s8 *) &data_020864a8 + (var_r2 * 2)));
}
