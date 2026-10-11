#include "m2c.h"

s32 func_02030ffc();                                /* extern */
s32 func_0203102c(s32);                             /* extern */
extern M2C_UNK data_02064028;

s32 func_02013724(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0203102c(arg0 + 0xA);
    if (temp_r0 == 0) {
        return 0;
    }
    *((M2C_UNK *)((s8 *)&data_02064028 + ((temp_r0 - 1) * 4))) = func_02030ffc();
    return 1;
}
