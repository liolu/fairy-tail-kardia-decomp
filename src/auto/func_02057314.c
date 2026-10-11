#include "m2c.h"
#include "engine.h"

void func_0204cc20(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204e808(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204eca8(M2C_UNK, M2C_UNK);
M2C_UNK func_020506d0(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02057208(void);

extern M2C_UNK data_0214fe04;

s32 func_02057314(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;

    temp_r0 = func_02057208();
    if (temp_r0 == 0) {
        return 8;
    }
    func_0204cc20(arg0, temp_r0, arg1);
    func_0204eca8(temp_r0, arg1);
    temp_r4 = func_020506d0(0xA, temp_r0, 0);
    func_0204e808((s32) &data_0214fe04, temp_r0, 1);
    var_r0 = 8;
    if (temp_r4 >= 0) {
        var_r0 = 2;
    }
    return var_r0;
}
