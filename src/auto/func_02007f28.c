#include "m2c.h"
#include "engine.h"

void func_02007f28(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r2)(arg0, arg1);
    void *temp_r3;

    temp_r3 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (M2C_FIELD(temp_r3, s32 *, 4) & 1) {
        temp_r2 = M2C_FIELD(temp_r3, M2C_UNK (**)(), 0x1C);
        if (temp_r2 != NULL) {
            temp_r2(arg0, arg1);
        }
    }
}
