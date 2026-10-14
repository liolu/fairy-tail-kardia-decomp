#include "engine.h"
#include "m2c.h"

void func_02037e6c(M2C_UNK, M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);
void func_020510d8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02037f68(s32 arg0) {
    s32 temp_r6;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x2C) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        do {
            temp_r6 = func_02050190();
            func_02037e6c(arg0, 1);
            func_020501a4(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x40) != 0);
    }
    func_020510d8(M2C_FIELD(arg0, s32 *, 0x4C), 0, 1 << M2C_FIELD(arg0, s32 *, 0x48), 0);
}
