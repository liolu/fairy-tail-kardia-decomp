#include "m2c.h"
#include "engine.h"

void func_020370ac(M2C_UNK);

void func_02037ae4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r0 == 0) {
        return;
    }
    func_020370ac(temp_r0);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
