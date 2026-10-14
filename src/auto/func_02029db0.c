#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213f864;

void func_02029db0(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213f864 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_0213f864 + (arg0 * 4))) + 1;
}
