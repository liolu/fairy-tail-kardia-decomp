#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021353cc;

void func_0201d64c(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_021353cc + (arg0 * 0x10))) = 0;
}
