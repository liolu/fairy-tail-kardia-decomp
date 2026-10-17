#include "m2c.h"

extern M2C_UNK data_0209047c;
extern M2C_UNK data_02090480;

void func_0200e334(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip                                          = arg0 * 0x164;
    *((M2C_UNK *) ((s8 *) &data_0209047c + temp_ip)) = arg1;
    *((M2C_UNK *) ((s8 *) &data_02090480 + temp_ip)) = arg2;
}
