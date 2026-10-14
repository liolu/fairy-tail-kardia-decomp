#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020903a4;

void func_0200c91c(void) {
    M2C_FIELD((void *) 0x04000000, s32 *, 0) =
        (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0x1F00) | (M2C_FIELD(&data_020903a4, s32 *, 0) << 8));
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) =
        (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0x1F00) | (M2C_FIELD(&data_020903a4, s32 *, 0x164) << 8));
}
