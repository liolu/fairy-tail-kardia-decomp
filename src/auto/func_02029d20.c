#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213f804;

void func_02029d20(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_0213f804 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_0213f804 + (arg0 * 4))) + 1;
}
