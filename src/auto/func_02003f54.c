#include "m2c.h"

extern M2C_UNK data_0208d3a4;

s32 func_02003f54(s32 arg0) {
    if (*((s16 *) ((s8 *) &data_0208d3a4 + (arg0 * 0x18))) != 0) {
        return 1;
    }
    return 0;
}
