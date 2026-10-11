/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

s32 func_02022d64(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r0;

    var_r0 = arg0;
    switch (arg2) {                                 /* irregular */
    case 2:
        var_r0 = M2C_FIELD((var_r0 + (arg1 * 2)), u16 *, 0x462) & 0x1F;
        /* fallthrough */
    default:
        return var_r0;
    case 0:
        return ((s32) M2C_FIELD((var_r0 + (arg1 * 2)), u16 *, 0x462) >> 9) & 0x7F;
    case 1:
        return ((s32) M2C_FIELD((var_r0 + (arg1 * 2)), u16 *, 0x462) >> 5) & 0xF;
    }
}
