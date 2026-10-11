#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208cbcc;

s32 func_02003b04(void) {
    if (M2C_FIELD(&data_0208cbcc, u8 *, 0x10) & 2) {
        return 1;
    }
    return 0;
}
