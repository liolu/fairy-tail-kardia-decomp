#include "engine.h"
#include "m2c.h"

s32 func_02021ee8(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD((arg0 + arg1), s8 *, 0x1F4);
}
