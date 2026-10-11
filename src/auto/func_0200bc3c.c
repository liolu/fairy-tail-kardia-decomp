#include "m2c.h"
#include "engine.h"

void func_0200bc3c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_ip;

    temp_ip = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    M2C_FIELD(temp_ip, s32 *, 0x58) = arg2;
    M2C_FIELD(temp_ip, s32 *, 0x5C) = arg3;
    M2C_FIELD(temp_ip, s32 *, 0x60) = arg4;
    M2C_FIELD(temp_ip, s32 *, 0x64) = arg5;
}
