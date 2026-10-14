#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02090478;

void func_0200e31c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02090478 + (arg0 * 0x164))) = arg1;
}
