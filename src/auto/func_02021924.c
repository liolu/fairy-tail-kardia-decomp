#include "m2c.h"
#include "engine.h"

s32 func_02021924(s32 arg0, s32 arg1) {
    return (s32) M2C_FIELD(((arg1 * 0xC) + arg0), s8 *, 0xD);
}
