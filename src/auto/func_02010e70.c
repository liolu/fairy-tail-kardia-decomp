#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02090368;

s32 func_02010e70(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(((arg0 * 0x2C) + M2C_FIELD(&data_02090368, s32 *, 0xC)), void **, 0x1C), u16 *, 4) & 2) {
        return 1;
    }
    return 0;
}
