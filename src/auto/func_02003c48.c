#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208c940;

void func_02003c48(s32 arg0) {
    M2C_FIELD(&data_0208c940, s32 *, 0xE4) = arg0;
}
