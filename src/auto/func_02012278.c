#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1574;

s32 func_02012278(void) {
    if (M2C_FIELD(&data_020a1574, s32 *, 0) == 0) {
        return 0;
    }
    return M2C_FIELD(&data_020a1574, s32 *, 4);
}
