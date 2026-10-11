#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208cbcc;

s32 func_02003b90(void) {
    return M2C_FIELD(&data_0208cbcc, s32 *, 0x18);
}
