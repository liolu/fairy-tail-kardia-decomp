#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213f774;

void func_02029c18(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0213f774 + (arg0 * 4))) = arg1;
}
