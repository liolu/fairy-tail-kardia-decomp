#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02133180;

s32 func_0201505c(void) {
    if (M2C_FIELD(&data_02133180, s32 *, 4) == 0) {
        return 1;
    }
    return 0;
}
