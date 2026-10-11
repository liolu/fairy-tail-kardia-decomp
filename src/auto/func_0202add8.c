#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213e484;

void func_0202add8(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_0213e484 + (arg0 * 4))) = arg1;
}
