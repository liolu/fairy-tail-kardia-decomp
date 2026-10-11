#include "m2c.h"
#include "engine.h"

void func_02021954(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xC) + arg0), s32 *, 0x10) = arg2;
}
