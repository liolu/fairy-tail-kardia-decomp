#include "m2c.h"
#include "engine.h"

void func_02054f5c(M2C_UNK, M2C_UNK);

void func_02055b0c(s32 arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = *(M2C_UNK *)arg1;
    M2C_FIELD(arg0, s32 *, 0x474) = (s32) (M2C_FIELD(arg0, s32 *, 0x474) & ~(1 << temp_r1));
    func_02054f5c(arg0 + 0x750, 1 << temp_r1);
}
