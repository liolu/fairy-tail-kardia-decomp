#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213f7e4;

void func_02029cf0(s32 arg0) {
    *((M2C_UNK *)((s8 *)&data_0213f7e4 + (arg0 * 4))) = *((M2C_UNK *)((s8 *)&data_0213f7e4 + (arg0 * 4))) + 1;
}
