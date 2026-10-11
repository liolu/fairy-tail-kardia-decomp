#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208c940;

s32 func_02006c00(void) {
    return M2C_FIELD(&data_0208c940, s32 *, 0x10);
}
