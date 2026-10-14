#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208c940;

void func_0200402c(void) {
    M2C_FIELD(&data_0208c940, s8 *, 0x64)  = 0;
    M2C_FIELD(&data_0208c940, s8 *, 0x65)  = 0;
    M2C_FIELD(&data_0208c940, s32 *, 0x68) = 0;
    M2C_FIELD(&data_0208c940, s32 *, 0x6C) = 0;
}
