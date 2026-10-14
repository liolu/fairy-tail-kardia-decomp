#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208cdd4;

void func_020064e8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;

    temp_ip                         = (arg0 * 0x38) + (s32) &data_0208cdd4;
    M2C_FIELD(temp_ip, s8 *, 0x34)  = 0;
    M2C_FIELD(temp_ip, s32 *, 0x1C) = arg1;
    M2C_FIELD(temp_ip, s32 *, 0x28) = arg2;
    M2C_FIELD(temp_ip, s32 *, 0x30) = arg3;
}
