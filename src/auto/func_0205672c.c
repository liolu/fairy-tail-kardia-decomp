#include "engine.h"
#include "m2c.h"

M2C_UNK func_02054754(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_0205672c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg1, s32 *, 4) = func_02054754(arg0 + 0x10, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), 0);
}
