#include "m2c.h"
#include "engine.h"

M2C_UNK func_02022654(M2C_UNK, M2C_UNK);

s32 func_02025848(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if ((var_r4 != 0x14) && (var_r4 != 0x23) && (var_r4 != 0x24)) {
        if (func_02022654(arg0, var_r4) == 0) {
            return 0;
        }
        goto block_8;
    }
block_8:
    var_r4 += 1;
    if (var_r4 >= 0x44) {
        return 1;
    }
    goto loop_1;
}
