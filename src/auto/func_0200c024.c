#include "m2c.h"

void func_0200c024(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    temp_r0 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (arg2 <= 8) {
        M2C_FIELD(temp_r0, s32 *, 0x74) = 0;
    } else if (arg2 <= 0x10) {
        M2C_FIELD(temp_r0, s32 *, 0x74) = 1;
    } else if (arg2 <= 0x20) {
        M2C_FIELD(temp_r0, s32 *, 0x74) = 2;
    } else if (arg2 <= 0x40) {
        M2C_FIELD(temp_r0, s32 *, 0x74) = 3;
    } else if (arg2 <= 0x80) {
        M2C_FIELD(temp_r0, s32 *, 0x74) = 4;
    } else if (arg2 <= 0x100) {
        M2C_FIELD(temp_r0, s32 *, 0x74) = 5;
    } else if (arg2 <= 0x200) {
        M2C_FIELD(temp_r0, s32 *, 0x74) = 6;
    } else {
        M2C_FIELD(temp_r0, s32 *, 0x74) = 7;
    }
    if (arg3 <= 8) {
        M2C_FIELD(temp_r0, s32 *, 0x78) = 0;
        return;
    }
    if (arg3 <= 0x10) {
        M2C_FIELD(temp_r0, s32 *, 0x78) = 1;
        return;
    }
    if (arg3 <= 0x20) {
        M2C_FIELD(temp_r0, s32 *, 0x78) = 2;
        return;
    }
    if (arg3 <= 0x40) {
        M2C_FIELD(temp_r0, s32 *, 0x78) = 3;
        return;
    }
    if (arg3 <= 0x80) {
        M2C_FIELD(temp_r0, s32 *, 0x78) = 4;
        return;
    }
    if (arg3 <= 0x100) {
        M2C_FIELD(temp_r0, s32 *, 0x78) = 5;
        return;
    }
    if (arg3 <= 0x200) {
        M2C_FIELD(temp_r0, s32 *, 0x78) = 6;
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x78) = 7;
}
