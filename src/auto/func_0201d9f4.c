#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02135424;

void func_0201d9f4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;

    temp_ip = (arg0 * 0x1C) + (s32) &data_02135424;
    M2C_FIELD(temp_ip, s32 *, 8) = arg1;
    M2C_FIELD(temp_ip, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_ip, s32 *, 0x10) = arg3;
}
