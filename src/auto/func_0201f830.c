#include "m2c.h"

extern M2C_UNK data_02086344;

s16 func_0201f830(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02086344 + (arg0 * 2)));
}
