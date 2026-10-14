#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02141820;

void func_0202ecbc(s32 arg0) {
    if ((u32) (M2C_FIELD(&data_02141820, s32 *, 0x18) - 9) > 1U) {
        M2C_FIELD(&data_02141820, s32 *, 0x1C) = arg0;
    }
}
