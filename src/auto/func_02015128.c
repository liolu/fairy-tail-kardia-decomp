#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02133180;

void func_02015128(void) {
    M2C_FIELD(&data_02133180, s32 *, 0x44) = 1;
}
