#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02133180;

s32 func_02013a78(void) {
    return M2C_FIELD(&data_02133180, s32 *, 0xC) = 0;
}
