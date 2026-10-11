#include "m2c.h"

extern M2C_UNK data_02087bbc;

s32 func_02020960(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 != 0) {
        if (var_r0 == 1) {
            var_r0 = *((M2C_UNK *)((s8 *)&data_02087bbc + (arg1 * 4)));
        }
        return var_r0;
    }
    return 3;
}
