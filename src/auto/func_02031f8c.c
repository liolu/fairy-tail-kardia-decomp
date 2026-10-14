#include "engine.h"
#include "m2c.h"

s32 func_02031f8c(s32 arg0) {
    if (arg0 != 0) {
        return M2C_FIELD(arg0, u16 *, 0x30) * 8;
    }
    return 0;
}
