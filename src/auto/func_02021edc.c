#include "m2c.h"
#include "engine.h"

void func_02021edc(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + arg1), s8 *, 0x1F4) = (s8) arg2;
}
