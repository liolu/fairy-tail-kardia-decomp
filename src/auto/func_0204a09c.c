#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214d9c0;

s32 func_0204a09c(void) {
    if (M2C_FIELD(M2C_FIELD(&data_0214d9c0, void **, 0xC), u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
