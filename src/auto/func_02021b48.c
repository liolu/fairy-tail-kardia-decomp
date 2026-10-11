#include "m2c.h"
#include "engine.h"

s32 func_02021b48(s32 arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x17C) >= 1) {
        return 1;
    }
    return 0;
}
