#include "engine.h"
#include "m2c.h"

void func_020218f4(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xC) + arg0), s8 *, 0xC) = (s8) arg2;
}
