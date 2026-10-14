#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021446a0;

s32 func_02030f10(void) {
    return (s32) M2C_FIELD(&data_021446a0, u16 *, 8);
}
