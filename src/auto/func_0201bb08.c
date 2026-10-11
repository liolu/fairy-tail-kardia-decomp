#include "m2c.h"

M2C_UNK func_0201bab8();                            /* extern */
extern M2C_UNK data_02135388;

void func_0201bb08(s32 arg0) {
    if (M2C_FIELD(&data_02135388, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_02135388, s32 *, 8) = arg0;
    if (arg0 == 0) {
        return;
    }
    func_0201bab8();
}
