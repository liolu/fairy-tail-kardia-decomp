#include "engine.h"
#include "m2c.h"

M2C_UNK func_02021644(void);

s32 func_02021718(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02021644();
    return temp_r0 + M2C_FIELD(((arg0 * 0x18) + temp_r0 + (arg1 * 4)), s32 *, 0xC);
}
