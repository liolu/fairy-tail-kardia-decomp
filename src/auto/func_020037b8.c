#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208c940;

void func_020037b8(s32 arg0) {
    M2C_FIELD(&data_0208c940, s32 *, 0xD0) = arg0;
}
