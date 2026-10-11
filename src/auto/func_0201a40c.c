#include "m2c.h"
#include "engine.h"

void func_0201a3cc(M2C_UNK);

extern M2C_UNK data_02135380;

void func_0201a40c(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_02135380, s32 *, 0);
    if ((s32) M2C_FIELD(&data_02135380, s32 *, 4) <= 0) {
        return;
    }
    do {
        func_0201a3cc(var_r5);
        var_r6 += 1;
        var_r5 += 0x38;
    } while (var_r6 < (s32) M2C_FIELD(&data_02135380, s32 *, 4));
}
