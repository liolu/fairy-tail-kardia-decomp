#include "m2c.h"
#include "engine.h"

void func_02021974(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xC) + arg0), s32 *, 0x14) = arg2;
}
