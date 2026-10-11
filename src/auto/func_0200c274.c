#include "m2c.h"

s16 func_0200c274(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    void *temp_r1_2;

    temp_r1_2 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (arg2 == 0) {
        return M2C_FIELD(M2C_FIELD(temp_r1_2, void **, 0x14), s16 *, 4);
    }
    temp_r1 = M2C_FIELD(temp_r1_2, s32 *, 0x18);
    return M2C_FIELD((temp_r1 + M2C_FIELD((temp_r1 + (M2C_FIELD(temp_r1_2, s16 *, 0x1C) * 4)), s32 *, 8)), s16 *, 2);
}
