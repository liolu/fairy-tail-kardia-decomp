#include "m2c.h"
#include "engine.h"

void func_0202ecac(M2C_UNK);
void func_0202ecbc(M2C_UNK);
M2C_UNK func_0202fc18(void);
M2C_UNK func_02058d8c(M2C_UNK);

extern M2C_UNK data_02141820;
extern M2C_UNK data_02142f80;

void func_020303f4(void) {
    s32 temp_r0;

    if (M2C_FIELD(&data_02141820, s32 *, 0x18) == 5) {
        temp_r0 = func_02058d8c((s32) &data_02142f80);
        if (temp_r0 != 0) {
            func_0202ecbc(temp_r0);
        }
    }
    if (func_0202fc18() != 0) {
        return;
    }
    func_0202ecac(0xA);
}
