#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213fadc;

void func_02029fd8(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213fadc + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_0213fadc + (arg0 * 4))) + 1;
}
