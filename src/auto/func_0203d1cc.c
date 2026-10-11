#include "m2c.h"
#include "engine.h"

M2C_UNK func_0203cca0(M2C_UNK, M2C_UNK);
M2C_UNK func_0203d020(M2C_UNK, M2C_UNK);
void func_0204e394(M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

void func_0203d1cc(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r8;
    s32 var_r5;

    var_r5 = arg0;
    temp_r4 = M2C_FIELD(var_r5, s32 *, 8);
    if (var_r5 == 0) {
        return;
    }
loop_3:
    temp_r8 = func_02050190();
    temp_r0 = M2C_FIELD(var_r5, s32 *, 0xC) | 0x40;
    M2C_FIELD(var_r5, s32 *, 0xC) = temp_r0;
    if (temp_r0 & 4) {
        func_0204e394(var_r5 + 0x18);
        var_r5 = 0;
    }
    func_020501a4(temp_r8);
    if (var_r5 == 0) {
        return;
    }
    if (func_0203cca0(var_r5, (s32) (u8) ((u32) M2C_FIELD(var_r5, u32 *, 0xC) >> 8)) == 0x100) {
        return;
    }
    var_r5 = func_0203d020(temp_r4, 1);
    if (var_r5 == 0) {
        return;
    }
    goto loop_3;
}
