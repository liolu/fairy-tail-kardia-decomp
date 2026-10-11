#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02135388;

void func_0201b7d8(void) {
    if (M2C_FIELD(&data_02135388, s32 *, 8) != 0) {
        *M2C_FIELD(&data_02135388, s32 **, 0) = 1;
    }
}
