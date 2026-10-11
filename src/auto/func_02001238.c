#include "m2c.h"

M2C_UNK func_02013674();                            /* extern */
u32 func_0202fd28();                                /* extern */
M2C_UNK func_020301ec(M2C_UNK, u16, u16);           /* extern */
extern M2C_UNK data_02133180;

s32 func_02001238(void) {
    s32 var_r4;
    u32 temp_r0;

    var_r4 = 0;
    temp_r0 = func_0202fd28();
    switch (temp_r0) {
    default:
        break;
    case 1:
        func_02013674();
        func_020301ec(4, (u16) (M2C_FIELD(&data_02133180, u16 *, 0x18) + 1), M2C_FIELD(&data_02133180, u16 *, 0x24));
        break;
    case 4:
    case 5:
    case 6:
        var_r4 = 1;
        break;
    }
    return var_r4;
}
