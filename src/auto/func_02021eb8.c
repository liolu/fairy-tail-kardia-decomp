#include "m2c.h"
#include "engine.h"

s32 func_02021eb8(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1EC) == 2) {
        return 1;
    }
    return 0;
}
