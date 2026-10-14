#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208d3a4;

void func_02004008(s32 arg0) {
    M2C_FIELD(&data_0208d3a4, s32 *, 0x60C) = arg0;
}
