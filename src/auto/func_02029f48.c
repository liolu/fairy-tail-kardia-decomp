#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213fa7c;

void func_02029f48(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213fa7c + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_0213fa7c + (arg0 * 4))) + 1;
}
