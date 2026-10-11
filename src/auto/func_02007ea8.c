#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208c940;

void func_02007ea8(s32 arg0) {
    *(M2C_UNK *)arg0 = 0;
    M2C_FIELD(&data_0208c940, s32 *, 0x54) = (s32) (M2C_FIELD(&data_0208c940, s32 *, 0x54) - 1);
}
