#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02090368;

void func_02010948(void) {
    M2C_FIELD(&data_02090368, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02090368, s32 *, 0x10) = 0;
}
