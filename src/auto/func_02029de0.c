#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213f884;

void func_02029de0(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213f884 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_0213f884 + (arg0 * 4))) + 1;
}
