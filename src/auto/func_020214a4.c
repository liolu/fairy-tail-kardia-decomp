#include "m2c.h"
#include "engine.h"

M2C_UNK func_02021430(void);

s32 func_020214a4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02021430();
    return temp_r0 + M2C_FIELD((temp_r0 + (arg0 * 8)), s32 *, 4);
}
