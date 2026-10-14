#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02133180;

void func_020144cc(void) {
    M2C_FIELD(&data_02133180, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02133180, s32 *, 0x58) = 0;
}
