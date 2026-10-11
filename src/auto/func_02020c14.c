#include "m2c.h"

s32 func_02020b6c();                                /* extern */
s32 func_02020bb8(M2C_UNK, M2C_UNK);                /* extern */

s8 func_02020c14(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = func_02020b6c();
    return M2C_FIELD((temp_r4 + (func_02020bb8(arg0, arg1) * 8) + (arg2 * 8)), s8 *, 0x10);
}
