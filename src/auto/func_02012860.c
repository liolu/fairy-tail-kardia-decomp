#include "m2c.h"
#include "engine.h"

M2C_UNK func_02014f8c(void);
void func_0204e808(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020a135c;
extern M2C_UNK data_020a13a4;

void func_02012860(s32 arg0) {
    if (func_02014f8c() != 0) {
        return;
    }
    if (M2C_FIELD(&data_020a135c, s32 *, 8) == 0) {
        return;
    }
    M2C_FIELD(&data_020a135c, s32 *, 0x1C) = arg0;
    M2C_FIELD(&data_020a135c, s32 *, 0x20) = 1;
    func_0204e808((s32) &data_020a13a4, 1, 1);
}
