#include "engine.h"
#include "m2c.h"

void func_02007564(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200757c(M2C_UNK, M2C_UNK);
void func_0200759c(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0208cc14;

void func_020074c0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r7;

    M2C_FIELD(&data_0208cc14, s32 *, 0) = arg0;
    M2C_FIELD(&data_0208cc14, s32 *, 4) = arg2;
    M2C_FIELD(&data_0208cc14, s32 *, 8) = arg4;
    if (arg0 & 1) {
        var_r7 = 0;
        func_02007564(0, 0, 0);
        do {
            func_0200757c(var_r7, 0);
            func_0200759c(var_r7, var_r7);
            var_r7 += 1;
        } while (var_r7 < 8);
    }
    M2C_FIELD(&data_0208cc14, s32 *, 0x14) = -1;
    if (arg1 != 0) {
        ((M2C_UNK(*)()) arg1)();
    }
    if (arg3 == 0) {
        return;
    }
    ((M2C_UNK(*)()) arg3)();
}
