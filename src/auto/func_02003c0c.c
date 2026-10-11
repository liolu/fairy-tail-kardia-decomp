#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208c940;

s32 func_02003c0c(void) {
    if (M2C_FIELD(&data_0208c940, s32 *, 0xD4) != 0) {
        return 1;
    }
    return 0;
}
