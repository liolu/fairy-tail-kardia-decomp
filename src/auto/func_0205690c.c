#include "m2c.h"

void *func_0203fdac();                              /* extern */
M2C_UNK func_0204cc20(s32, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0205690c(s32 arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    s32 var_r7;
    void *temp_r0;
    void *var_r0;

    var_r7  = 5;
    temp_r0 = func_0203fdac();
    if (((u32) (M2C_FIELD(temp_r0, s32 *, 0xC) << 0x1F) >> 0x1F) != 0) {
        var_r0 = temp_r0 + 0xA30;
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        func_0204cc20(M2C_FIELD(var_r0, s32 *, 4) + arg2, arg1, arg3);
        var_r7 = 0;
    }
    return var_r7;
}
