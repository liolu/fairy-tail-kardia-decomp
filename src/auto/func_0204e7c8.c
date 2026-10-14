#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204e77c(void);

s32 func_0204e7c8(void) {
    if (func_0204e77c() & 0x10000000) {
        return 1;
    }
    return 0;
}
