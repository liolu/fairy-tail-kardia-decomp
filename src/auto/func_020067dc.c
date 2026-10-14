#include "m2c.h"

s32 func_020416a0();                                /* extern */

s32 func_020067dc(void) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = func_020416a0() * 0x168;
    var_r0  = ((s32) (temp_r1 + ((u32) (temp_r1 >> 0xF) >> 0x10)) >> 0x10) << 0xC;
    if (var_r0 < 0) {
        var_r0 += 0x168000;
    }
    return var_r0;
}
