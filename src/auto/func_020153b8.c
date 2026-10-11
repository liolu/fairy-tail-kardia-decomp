#include "m2c.h"

M2C_UNK func_02014550(s32);                         /* extern */
extern M2C_UNK data_02133180;

void func_020153b8(s16 arg0) {
    if (M2C_FIELD(&data_02133180, s32 *, 0x20) != 0) {
        return;
    }
    M2C_FIELD(&data_02133180, s16 *, 0x54) = arg0;
    func_02014550(0xFDC);
}
