#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02134180;

void func_02014ff0(void) {
    M2C_FIELD(&data_02134180, s32 *, 0xA8) = 1;
}
