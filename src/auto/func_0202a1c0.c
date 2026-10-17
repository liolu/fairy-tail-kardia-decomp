#include "m2c.h"

extern M2C_UNK data_0214027c;

void func_0202a1c0(s32 arg0, s32 arg1, s32 arg2) {
    *(s8 *) (arg2 + ((arg0 * 0x24) + (s32) &data_0214027c)) = 1;
}