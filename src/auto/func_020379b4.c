#include "m2c.h"
#include "engine.h"

void func_02031a8c(M2C_UNK, M2C_UNK);
void func_0203779c(M2C_UNK, M2C_UNK);
void func_020377ec(M2C_UNK);

extern M2C_UNK data_0214a6d8;

void func_020379b4(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4 != 0) {
        func_02031a8c(temp_r4, arg0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_02031a8c((s32) &data_0214a6d8, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = (s8) arg1;
    if (temp_r4 != 0) {
        func_0203779c(temp_r4, arg0);
    }
    func_020377ec(arg0);
}
