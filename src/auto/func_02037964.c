#include "engine.h"
#include "m2c.h"

void func_02031a8c(M2C_UNK, M2C_UNK);
void func_020389fc(M2C_UNK);

extern M2C_UNK data_0214ab24;

void func_02037964(s32 arg0) {
    s32 temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 == 0) {
        return;
    }
    func_020389fc(temp_r0);
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_02031a8c((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_0214ab24 + 0xC, arg0);
}
