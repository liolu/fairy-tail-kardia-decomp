#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02141820;

void func_02030318(s32 arg0) {
    M2C_FIELD(&data_02141820, s32 *, 0x30) = arg0;
}
