#include "m2c.h"

s32 func_02051be0(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s8 data_021482b4;
extern M2C_UNK data_02148300;

s32 func_02036fd8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    if ((s32) data_021482b4 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = (data_021482b4 * 0x11E0) + (s32) &data_02148300;
    }
    if (var_r0 == 0) {
        return 0;
    }
    return func_02051be0(var_r0, arg0, arg1);
}
