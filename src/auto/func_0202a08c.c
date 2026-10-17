#include "m2c.h"

extern M2C_UNK data_0213fc4c;

void func_0202a08c(s32 arg0, s32 arg1, s32 arg2) {
    *(s8 *) (arg2 + ((arg0 * 0x24) + (s32) &data_0213fc4c)) = 1;
}