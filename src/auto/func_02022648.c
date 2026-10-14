#include "engine.h"
#include "m2c.h"

void func_02022648(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + arg1), s8 *, 0x325) = (s8) arg2;
}
