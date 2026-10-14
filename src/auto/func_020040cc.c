#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208c940;

s32 func_020040cc(void) {
    return M2C_FIELD(&data_0208c940, s32 *, 0x68);
}
