#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213fabc;

void func_02029fa8(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213fabc + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_0213fabc + (arg0 * 4))) + 1;
}
