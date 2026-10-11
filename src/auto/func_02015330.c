#include "m2c.h"

u32 func_02014fe4();                                /* extern */
extern M2C_UNK data_02133180;
extern M2C_UNK data_0213349c;

s32 func_02015330(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(&data_02133180, s32 *, 0x20) == 0) {
        if (arg0 == -1) {
            var_r4 = 1;
        } else if (func_02014fe4() >= 3U) {
            var_r4 = 1;
        }
    } else if (arg0 == -1) {
        var_r4 = 1;
    } else if (*((M2C_UNK *)((s8 *)&data_0213349c + (arg0 * 4))) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
