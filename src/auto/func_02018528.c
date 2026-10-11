#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02134a0c;

s32 func_02018528(s32 arg0) {
    M2C_FIELD(&data_02134a0c, s32 *, 0x18) = arg0;
    return arg0;
}
