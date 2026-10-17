#include "m2c.h"

extern M2C_UNK data_021400cc;

void func_0202a16c(s32 arg0, s32 arg1, s32 arg2) {
    *(s8 *) (arg2 + ((arg0 * 0x24) + (s32) &data_021400cc)) = 1;
}