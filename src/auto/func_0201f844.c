#include "m2c.h"

extern M2C_UNK data_02086538;

s16 func_0201f844(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 == 0x23) {
        var_r2 = 0;
    }
    return *((u16 *) ((s8 *) &data_02086538 + (var_r2 * 2)));
}
