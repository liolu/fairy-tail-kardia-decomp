#include "m2c.h"

M2C_UNK func_0202ecbc();                            /* extern */
s32 func_0202f1c4();                                /* extern */
M2C_UNK func_020303f4();                            /* extern */
s32 func_020596b8(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02142760;

s32 func_0202f184(void) {
    if (func_020596b8(&data_02142760) != 0) {
        func_0202ecbc();
        return 0;
    }
    if (func_0202f1c4() != 0) {
        return 1;
    }
    func_020303f4();
    return 0;
}
