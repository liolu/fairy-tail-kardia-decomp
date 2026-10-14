#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021353ec;

void func_0201cfec(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_021353ec + (arg0 * 0x1C))) = 0;
}
