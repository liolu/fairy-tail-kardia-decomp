#include "m2c.h"
#include "engine.h"

M2C_UNK func_02041a14(void);
void func_02041a24(void);
M2C_UNK func_020534b0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_020536b0(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 != 1) {
        var_r4 = 0;
        if (func_02041a14() != 0) {
            func_02041a24();
        }
    }
    return func_020534b0(var_r4, 0, 0, 1);
}
