#include "m2c.h"

M2C_UNK func_0205120c(s32, M2C_UNK);                /* extern */

void func_02037d88(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 > (s32) (M2C_FIELD(arg0, s32 *, 0x50) - 1)) {
        return;
    }
    func_0205120c(1 << M2C_FIELD((arg0 + arg1), u8 *, 0x54), arg2);
}
