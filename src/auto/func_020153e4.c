#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02133180;

s32 func_020153e4(void) {
    if (M2C_FIELD(&data_02133180, s32 *, 0x20) == 0) {
        return M2C_FIELD(&data_02133180, s32 *, 0x40);
    }
    return 1;
}
