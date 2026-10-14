#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200554c(M2C_UNK, M2C_UNK);

s32 func_02020070(s32 arg0) {
    return (s32) M2C_FIELD((func_0200554c(3, 0x3D8) + (arg0 * 8)), s16 *, 2);
}
