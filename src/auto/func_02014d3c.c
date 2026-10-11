#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02133180;

s32 func_02014d3c(void) {
    if (M2C_FIELD(&data_02133180, s32 *, 0x50) != 0) {
        return 0;
    }
    return M2C_FIELD(&data_02133180, s32 *, 0x4C);
}
