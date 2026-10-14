#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213faac;

void func_02029f90(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213faac + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_0213faac + (arg0 * 4))) + 1;
}
