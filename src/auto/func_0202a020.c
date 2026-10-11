#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213fb0c;

void func_0202a020(s32 arg0) {
    *((M2C_UNK *)((s8 *)&data_0213fb0c + (arg0 * 4))) = *((M2C_UNK *)((s8 *)&data_0213fb0c + (arg0 * 4))) + 1;
}
