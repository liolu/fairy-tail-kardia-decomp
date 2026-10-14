#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021353cc;

void func_0201d5b4(s32 arg0, s32 arg1) {
    M2C_FIELD(((M2C_UNK *) ((s8 *) &data_021353cc + (arg0 * 0x10))), s32 *, 0xC) = arg1;
}
