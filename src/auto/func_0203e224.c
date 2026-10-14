#include "engine.h"
#include "m2c.h"

void func_0204cb8c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204ec8c(M2C_UNK, M2C_UNK);
void func_0204ed00(M2C_UNK, M2C_UNK);

void func_0203e224(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    func_0204ed00(temp_r4, temp_r6);
    func_0204ec8c(temp_r4, temp_r6);
    func_0204cb8c(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
