#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a135c;

s32 func_020128a8(void) {
    if (M2C_FIELD(&data_020a135c, s32 *, 8) == 0) {
        return 0;
    }
    return M2C_FIELD(&data_020a135c, s32 *, 0x20);
}
