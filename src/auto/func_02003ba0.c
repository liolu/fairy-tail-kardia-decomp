#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208cbcc;

void func_02003ba0(void) {
    M2C_FIELD(&data_0208cbcc, s32 *, 0x1C) = 1;
}
