#include "m2c.h"

extern M2C_UNK data_02086394;

s16 func_0201f8b4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02086394 + (arg0 * 2)));
}
