#include "engine.h"
#include "m2c.h"

s32 func_02021904(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD(((arg1 * 0xC) + arg0), s8 *, 0xC);
}
