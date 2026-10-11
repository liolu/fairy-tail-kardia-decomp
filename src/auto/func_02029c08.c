#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213f764;

void func_02029c08(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_0213f764 + (arg0 * 4))) = arg1;
}
