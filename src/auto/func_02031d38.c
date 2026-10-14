#include "engine.h"
#include "m2c.h"

void func_02031d38(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
