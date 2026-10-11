#include "m2c.h"

M2C_UNK func_02036ef8(s32);                         /* extern */
extern M2C_UNK data_020a1574;

void func_02012250(s32 arg0) {
    if (M2C_FIELD(&data_020a1574, s32 *, 0) == 0) {
        return;
    }
    M2C_FIELD(&data_020a1574, s32 *, 4) = arg0;
    func_02036ef8(arg0 >> 0xC);
}
