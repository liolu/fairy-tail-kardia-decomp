#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213fb1c;

void func_0202a038(s32 arg0) {
    *((M2C_UNK *)((s8 *)&data_0213fb1c + (arg0 * 4))) = *((M2C_UNK *)((s8 *)&data_0213fb1c + (arg0 * 4))) + 1;
}
