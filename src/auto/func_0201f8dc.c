#include "m2c.h"

extern M2C_UNK data_020863f4;

s16 func_0201f8dc(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020863f4 + (arg0 * 2)));
}
