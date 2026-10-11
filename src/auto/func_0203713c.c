#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214a6c0;

void func_0203713c(s32 arg0) {
    M2C_FIELD(&data_0214a6c0, s32 *, 4) = (s32) (M2C_FIELD(&data_0214a6c0, s32 *, 4) & ~(1 << arg0));
}
