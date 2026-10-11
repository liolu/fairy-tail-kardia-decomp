#include "m2c.h"

M2C_UNK func_02059a10(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_02133180;

void func_020152b0(s32 arg0) {
    if (M2C_FIELD(&data_02133180, s32 *, 0x20) != 0) {
        return;
    }
    if (arg0 == 0) {
        func_02059a10(0, 0);
        return;
    }
    func_02059a10(0, 1);
}
