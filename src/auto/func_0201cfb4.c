#include "m2c.h"

extern M2C_UNK data_021353ec;

void func_0201cfb4(s32 arg0) {
    s32 temp_r1;
    void *temp_r1_2;

    temp_r1                                          = arg0 * 0x1C;
    *((M2C_UNK *) ((s8 *) &data_021353ec + temp_r1)) = 0;
    temp_r1_2                                        = (M2C_UNK *) ((s8 *) &data_021353ec + temp_r1);
    M2C_FIELD(temp_r1_2, s32 *, 4)                   = 0;
    M2C_FIELD(temp_r1_2, s32 *, 8)                   = 0;
    M2C_FIELD(temp_r1_2, s32 *, 0x10)                = 0;
    M2C_FIELD(temp_r1_2, s32 *, 0xC)                 = 0;
    M2C_FIELD(temp_r1_2, s32 *, 0x18)                = 0;
    M2C_FIELD(temp_r1_2, s32 *, 0x14)                = 0;
}
