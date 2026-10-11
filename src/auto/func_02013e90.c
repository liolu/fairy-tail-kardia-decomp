#include "m2c.h"

M2C_UNK func_02013294();                            /* extern */
extern M2C_UNK data_02133380;

s32 func_02013e90(void) {
    M2C_FIELD(&data_02133380, u16 *, 0xA4) = (u16) (M2C_FIELD(&data_02133380, u16 *, 0xA4) + 1);
    func_02013294();
    return 0;
}
