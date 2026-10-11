#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213f814;

void func_02029d38(s32 arg0) {
    *((M2C_UNK *)((s8 *)&data_0213f814 + (arg0 * 4))) = *((M2C_UNK *)((s8 *)&data_0213f814 + (arg0 * 4))) + 1;
}
