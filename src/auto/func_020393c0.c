#include "m2c.h"
#include "engine.h"

M2C_UNK func_02038464(M2C_UNK);
M2C_UNK func_020388e4(M2C_UNK);
void func_0203890c(M2C_UNK, M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

void func_020393c0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_02050190();
    temp_r4 = func_02038464(arg1);
    if (arg0 == func_020388e4(arg2)) {
        func_0203890c(arg2, 0);
    }
    func_02038464(temp_r4);
    func_020501a4(temp_r5);
}
