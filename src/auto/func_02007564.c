#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208cc14;

void func_02007564(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_0208cc14, s8 *, 0xC) = (s8) arg0;
    M2C_FIELD(&data_0208cc14, s8 *, 0xD) = (s8) arg1;
    M2C_FIELD(&data_0208cc14, s8 *, 0xE) = (s8) arg2;
}
