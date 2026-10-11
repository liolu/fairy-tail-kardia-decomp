#include "m2c.h"

extern M2C_UNK data_0213e1fc;

s32 func_0201e168(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_0213e1fc + (arg0 * 4))) = arg1;
    return 0;
}
