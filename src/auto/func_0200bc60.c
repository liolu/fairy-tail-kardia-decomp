#include "m2c.h"
#include "engine.h"

s32 func_0200bc60(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_r2 < (s32) M2C_FIELD(temp_r3, s32 *, 0x58)) || (temp_r2 > (s32) M2C_FIELD(temp_r3, s32 *, 0x5C)) || (temp_r1 = M2C_FIELD(arg0, s32 *, 4), (temp_r1 < (s32) M2C_FIELD(temp_r3, s32 *, 0x60))) || (temp_r1 > (s32) M2C_FIELD(temp_r3, s32 *, 0x64))) {
        return 0;
    }
    if (M2C_FIELD(temp_r3, s32 *, 4) & 2) {
        return 1;
    }
    return 0;
}
