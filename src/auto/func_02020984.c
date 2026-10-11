#include "m2c.h"

s16 *func_0200554c(s32, s32);                       /* extern */
s32 func_02020960(M2C_UNK, M2C_UNK);                /* extern */

s16 func_02020984(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02020960(0, arg0);
    return *func_0200554c(temp_r4, func_02020960(1, arg0));
}
