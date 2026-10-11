#include "m2c.h"
#include "engine.h"

M2C_UNK func_02003630(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0208c940;

void func_02009d5c(s32 arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r0 = func_02003630(1, 0x20, arg0 * 0xCC);
    var_r2 = 0;
    M2C_FIELD(&data_0208c940, s32 *, 0x7C) = var_r0;
    M2C_FIELD(&data_0208c940, s32 *, 0x80) = arg0;
    M2C_FIELD(&data_0208c940, s32 *, 0x84) = 0;
    if (arg0 <= 0) {
        return;
    }
    do {
        var_r2 += 1;
        *(M2C_UNK *)var_r0 = 0;
        var_r0 += 0xCC;
    } while (var_r2 < arg0);
}
