#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213fa8c;

void func_02029f60(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213fa8c + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_0213fa8c + (arg0 * 4))) + 1;
}
