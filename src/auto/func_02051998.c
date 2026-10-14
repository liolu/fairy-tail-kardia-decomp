#include "engine.h"
#include "m2c.h"

M2C_UNK func_02051920(void);
M2C_UNK func_0205195c(void);

s32 func_02051998(void) {
    s32 temp_r4;

    temp_r4 = func_02051920();
    return (0x100 - temp_r4) - func_0205195c();
}
