#include "m2c.h"

s32 func_02012da8();                                /* extern */
M2C_UNK func_0201faa0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

s32 func_0201fd30(void) {
    s32 temp_r4;

    temp_r4 = func_02012da8();
    func_0201faa0(-1, 0x20, -1);
    return temp_r4;
}
