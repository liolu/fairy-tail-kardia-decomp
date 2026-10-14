#include "engine.h"
#include "m2c.h"

M2C_UNK func_02021644(void);

s32 func_020216c0(s32 arg0) {
    return (s32) M2C_FIELD(((arg0 * 0x18) + func_02021644()), s16 *, 4);
}
