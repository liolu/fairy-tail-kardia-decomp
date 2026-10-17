#include "m2c.h"

extern M2C_UNK data_020863c4;

s16 func_0201f8c8(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020863c4 + (arg0 * 2)));
}
