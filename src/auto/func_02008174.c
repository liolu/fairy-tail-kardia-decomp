#include "m2c.h"
#include "engine.h"

M2C_UNK func_02003630(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0208c940;

void func_02008174(s32 arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r0 = func_02003630(1, 0x20, arg0 * 0x44);
    var_r2 = 0;
    M2C_FIELD(&data_0208c940, s32 *, 0x58) = var_r0;
    M2C_FIELD(&data_0208c940, s32 *, 0x5C) = arg0;
    M2C_FIELD(&data_0208c940, s32 *, 0x60) = 0;
    if (arg0 <= 0) {
        return;
    }
    do {
        var_r2 += 1;
        *(M2C_UNK *)var_r0 = 0;
        var_r0 += 0x44;
    } while (var_r2 < arg0);
}
