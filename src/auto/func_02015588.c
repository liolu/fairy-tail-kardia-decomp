#include "m2c.h"

extern M2C_UNK data_02134180;

s32 func_02015588(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_02134180, s32 *, 0xB4)  = 2;
    M2C_FIELD(&data_02134180, s32 *, 0x2C0) = arg0;
    M2C_FIELD(&data_02134180, s32 *, 0x2C4) = arg1;
    M2C_FIELD(&data_02134180, s32 *, 0x2C8) = arg2;
    return 1;
}
