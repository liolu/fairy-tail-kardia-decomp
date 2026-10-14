#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02134180;

s32 func_02014f8c(void) {
    return M2C_FIELD(&data_02134180, s32 *, 0x98);
}
