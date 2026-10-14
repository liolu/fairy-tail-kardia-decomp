#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208cbcc;

s32 func_02003ae8(void) {
    if (M2C_FIELD(&data_0208cbcc, u8 *, 0x10) & 1) {
        return 1;
    }
    return 0;
}
