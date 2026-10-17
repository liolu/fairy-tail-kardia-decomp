/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02086774;
extern M2C_UNK data_02086776;
extern M2C_UNK data_02141334;

s16 func_0201fa10(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_r0;
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 == 0x23) {
        var_r2 = 0;
    }
    if (arg1 == arg0) {
        if (M2C_FIELD(&data_02141334, s32 *, 0x4BC) == 0) {
            var_r0 = *((u16 *) ((s8 *) &data_02086774 + (var_r2 * 4)));
        } else {
            var_r0 = *((u16 *) ((s8 *) &data_02086776 + (var_r2 * 4)));
        }
        return var_r0;
    }
    return 0;
}
