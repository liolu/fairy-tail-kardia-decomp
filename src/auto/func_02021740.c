#include "engine.h"
#include "m2c.h"

M2C_UNK func_02021644(void);

s32 func_02021740(s32 arg0) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r0 = func_02021644();
    temp_r1 = M2C_FIELD(((arg0 * 0x18) + temp_r0), s32 *, 0x14);
    if (temp_r1 == 0) {
        return 0;
    }
    return temp_r0 + temp_r1;
}
