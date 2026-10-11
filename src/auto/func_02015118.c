#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02133180;

s32 func_02015118(void) {
    return M2C_FIELD(&data_02133180, s32 *, 0x40);
}
