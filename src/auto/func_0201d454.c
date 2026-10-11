#include "m2c.h"

extern M2C_UNK data_021353ec;

s32 func_0201d454(s32 arg0) {
    if (*((M2C_UNK *)((s8 *)&data_021353ec + (arg0 * 0x1C))) != 0) {
        return 1;
    }
    return 0;
}
