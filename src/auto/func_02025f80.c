#include "engine.h"
#include "m2c.h"

M2C_UNK func_02022bf8(M2C_UNK, M2C_UNK);

s32 func_02025f80(s32 arg0) {
    s32 var_r5;

    var_r5 = 0;
loop_1:
    if (func_02022bf8(arg0, var_r5) == 0) {
        return 0;
    }
    var_r5 += 1;
    if (var_r5 > 0x12A) {
        return 1;
    }
    goto loop_1;
}
