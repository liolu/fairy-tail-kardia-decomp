#include "m2c.h"

s32 func_020388e4(M2C_UNK);                         /* extern */
M2C_UNK func_0204cc20(s32, s32, M2C_UNK);           /* extern */

s32 func_0203b15c(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                      = func_020388e4(arg1);
    M2C_FIELD(arg0, s32 *, 0xAC) = temp_r0;
    func_0204cc20(temp_r0, arg0 + 0xB0, 0x40);
    return 1;
}
