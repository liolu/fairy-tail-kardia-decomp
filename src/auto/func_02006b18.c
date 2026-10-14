#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208c940;

void func_02006b18(void) {
    M2C_FIELD(&data_0208c940, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0208c940, s32 *, 8)    = 0;
}
