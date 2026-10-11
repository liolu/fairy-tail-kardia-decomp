#include "m2c.h"
#include "engine.h"

M2C_UNK func_02022638(M2C_UNK, M2C_UNK);

s32 func_02025810(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if (func_02022638(arg0, var_r4) == 0) {
        return 0;
    }
    var_r4 += 1;
    if (var_r4 >= 0x1C) {
        return 1;
    }
    goto loop_1;
}
