#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02090380;

void func_02010eac(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_02090380 + (arg0 * 4))) = arg1;
}
