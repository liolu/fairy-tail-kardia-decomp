#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02090484;

void func_0200e37c(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_02090484 + (arg0 * 0x164))) = arg1;
}
