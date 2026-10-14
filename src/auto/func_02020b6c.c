#include "engine.h"
#include "m2c.h"

M2C_UNK func_02020b20(void);

s32 func_02020b6c(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02020b20();
    return temp_r0 + M2C_FIELD((temp_r0 + (arg1 * 4)), s32 *, 4);
}
