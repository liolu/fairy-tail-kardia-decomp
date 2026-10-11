/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020869bc;
extern M2C_UNK data_020869c0;
extern M2C_UNK data_02141334;

s32 func_0201fa5c(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 == 0x23) {
        var_r2 = 0;
    }
    if (arg1 == arg0) {
        if (M2C_FIELD(&data_02141334, s32 *, 0x4BC) == 0) {
            var_r0 = *((M2C_UNK *)((s8 *)&data_020869bc + (var_r2 * 8)));
        } else {
            var_r0 = *((M2C_UNK *)((s8 *)&data_020869c0 + (var_r2 * 8)));
        }
        return var_r0;
    }
    return 0;
}
