#include "m2c.h"
#include "engine.h"

M2C_UNK func_02048290(M2C_UNK);
void func_0204cc20(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

s32 func_0204b340(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    if ((u32) arg0 >= 0x10U) {
        return 0;
    }
    temp_r4 = func_02050190();
    temp_r0 = func_02048290(arg0);
    if (temp_r0 == 0) {
        func_020501a4(temp_r4);
        return 0;
    }
    func_0204cc20(temp_r0 + 0x4C0, arg1, 0xC0);
    func_020501a4(temp_r4);
    return 1;
}
