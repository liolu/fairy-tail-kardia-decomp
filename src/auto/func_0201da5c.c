#include "m2c.h"
#include "engine.h"

void func_0201d6a0(M2C_UNK);

extern M2C_UNK data_02135424;

void func_0201da5c(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = (0x1C * arg0) + (s32) &data_02135424;
    if (arg1 == 0) {
        M2C_FIELD(temp_r0, volatile s32 *, 0) = -1;
        M2C_FIELD(temp_r0, volatile s32 *, 0x14) = (s32) M2C_FIELD(temp_r0, volatile s32 *, 0x18);
        func_0201d6a0(temp_r0);
        return;
    }
    M2C_FIELD(temp_r0, volatile s32 *, 0) = 1;
    M2C_FIELD(temp_r0, volatile s32 *, 0x14) = 0;
    func_0201d6a0(temp_r0);
}
