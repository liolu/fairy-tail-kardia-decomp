#include "m2c.h"

s8 *func_020239ec(s32);                             /* extern */
M2C_UNK func_02023a04();                            /* extern */

void func_02023a78(void) {
    s8 *var_r0;
    u32 var_r4;

    var_r4 = 0;
    var_r0 = func_020239ec(0);
    do {
        var_r4 += 1;
        *var_r0 = 0;
        var_r0 += 1;
    } while (var_r4 < 0x6BCU);
    func_020239ec(0);
    func_02023a04();
}
