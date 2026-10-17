#include "m2c.h"

extern u16 data_0213455c;

void func_020164a8(u16 *arg0) {
    u16 *var_r0;
    u16 *var_r2;
    u16 temp_r1;
    u32 var_r3;

    var_r0 = arg0;
    var_r2 = &data_0213455c;
    var_r3 = 0;
    do {
        temp_r1 = *var_r2;
        var_r2  = (u16 *) ((s8 *) var_r2 + 2);
        var_r3 += 1;
        *var_r0 = temp_r1;
        var_r0  = (u16 *) ((s8 *) var_r0 + 2);
    } while (var_r3 < 0x10U);
}
