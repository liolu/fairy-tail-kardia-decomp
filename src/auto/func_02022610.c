#include "m2c.h"
#include "engine.h"

void func_02022610(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + arg1), s8 *, 0x2F4) = (s8) arg2;
}
