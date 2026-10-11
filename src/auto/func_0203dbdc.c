#include "m2c.h"
#include "engine.h"

void func_0203cba4(M2C_UNK, M2C_UNK);
M2C_UNK func_0203d020(M2C_UNK, M2C_UNK);
void func_0203d1cc(M2C_UNK);
void func_0204e394(M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

void func_0203dbdc(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_r5, s32 *, 0xC) & 4) {
        temp_r4 = func_02050190();
        M2C_FIELD(temp_r5, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r5, s32 *, 0xC) | 8);
        M2C_FIELD(temp_r5, s32 *, 0x14) = arg1;
        func_0204e394((s32) (temp_r5 + 0x18));
        func_020501a4(temp_r4);
        return;
    }
    func_0203cba4((s32) temp_r5, arg1);
    temp_r0 = func_0203d020(arg0, 1);
    if (temp_r0 == 0) {
        return;
    }
    func_0203d1cc(temp_r0);
}
