/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

M2C_UNK func_0202ecac(M2C_UNK);                     /* extern */
M2C_UNK func_0202ecbc();                            /* extern */
s32 func_0202fb54();                                /* extern */
s32 func_020596b8(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02141820;
extern M2C_UNK data_02142760;

s32 func_0202fafc(void) {
    if (M2C_FIELD(&data_02141820, s32 *, 0x18) != 6) {
        return 0;
    }
    func_0202ecac(3);
    if (func_020596b8(&data_02142760) != 0) {
        func_0202ecbc();
        return 0;
    }
    if (func_0202fb54() == 0) {
        return 0;
    }
    return 1;
}
