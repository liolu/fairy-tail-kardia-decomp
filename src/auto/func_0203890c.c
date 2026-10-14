#include "engine.h"
#include "m2c.h"

extern void *data_0214b110;

void func_0203890c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_0214b110, s32 *, 0x90) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
