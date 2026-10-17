#include "m2c.h"

extern M2C_UNK data_021331f2;

s32 func_020151ec(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == -1) {
        var_r2 = 1;
    } else if (*((u16 *) ((s8 *) &data_021331f2 + (arg0 << 5))) != 0) {
        var_r2 = 1;
    }
    return var_r2;
}
