#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213f794;

void func_02029c60(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0213f794 + (arg0 * 4))) = arg1;
}
