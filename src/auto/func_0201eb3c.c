#include "m2c.h"

extern M2C_UNK data_02135594;

void func_0201eb3c(s32 arg0) {
    s16 *var_r1;
    s32 var_r2;

    var_r1 = *((M2C_UNK *) ((s8 *) &data_02135594 + (arg0 * 0x18)));
    if (var_r1 == NULL) {
        return;
    }
    var_r2 = 0;
    do {
        var_r2 += 1;
        *var_r1 = 0;
        var_r1  = (s16 *) ((s8 *) var_r1 + 2);
    } while (var_r2 < 0x400);
}
