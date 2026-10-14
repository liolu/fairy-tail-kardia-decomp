#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202261c(M2C_UNK, M2C_UNK);

s32 func_020257d8(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if (func_0202261c(arg0, var_r4) == 0) {
        return 0;
    }
    var_r4 += 1;
    if (var_r4 >= 0x15) {
        return 1;
    }
    goto loop_1;
}
