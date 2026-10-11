#include "m2c.h"

M2C_UNK func_0204e3fc(s32);                         /* extern */
extern M2C_UNK data_0214cc40;

void func_0203b9d8(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0xB) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    M2C_FIELD(&data_0214cc40, s32 *, 4) = (s32) (M2C_FIELD(&data_0214cc40, s32 *, 4) & ~0x20);
    func_0204e3fc(M2C_FIELD(&data_0214cc40, s32 *, 0x51C));
}
