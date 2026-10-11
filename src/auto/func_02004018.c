#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208d3a4;

s32 func_02004018(void) {
    return M2C_FIELD(&data_0208d3a4, s32 *, 0x60C);
}
