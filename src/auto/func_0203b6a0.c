#include "m2c.h"

extern M2C_UNK data_0214cc40;

s32 func_0203b6a0(void) {
    if (!(M2C_FIELD(&data_0214cc40, s32 *, 4) & 4)) {
        return 1;
    }
    return 0;
}
