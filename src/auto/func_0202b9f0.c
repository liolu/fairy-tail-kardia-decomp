#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213e204;

void func_0202b9f0(void) {
    if (M2C_FIELD(&data_0213e204, s32 *, 0x70) != 0) {
        M2C_FIELD(&data_0213e204, s32 *, 0x9C) = 1;
    }
}
