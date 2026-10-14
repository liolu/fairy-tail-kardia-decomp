#include "engine.h"
#include "m2c.h"

M2C_UNK func_020229fc(M2C_UNK, M2C_UNK);

s32 func_02025ba8(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if ((var_r4 != 0) && (var_r4 != 5) && (var_r4 != 7) && (var_r4 != 0x13) && (var_r4 != 0x14)) {
        if (func_020229fc(arg0, var_r4) == 0) {
            return 0;
        }
        goto block_10;
    }
block_10:
    var_r4 += 1;
    if (var_r4 >= 0x17) {
        return 1;
    }
    goto loop_1;
}
