#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208d3a4;

s32 func_02003fc8(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x18) + (s32) &data_0208d3a4), s32 *, 0xC);
}
