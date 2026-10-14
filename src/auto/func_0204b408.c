#include "engine.h"
#include "m2c.h"

extern s32 data_0214da30;

void func_0204b408(s32 arg0) {
    data_0214da30                         = arg0;
    M2C_FIELD(arg0, s32 *, 0xC)           = 0;
    M2C_FIELD(data_0214da30, s16 *, 0x1A) = 0;
    M2C_FIELD(data_0214da30, s16 *, 0x1E) = 0;
    M2C_FIELD(data_0214da30, s16 *, 0x20) = 0;
    M2C_FIELD(data_0214da30, s16 *, 0x1C) = 0;
    M2C_FIELD(data_0214da30, s32 *, 4)    = 0;
    M2C_FIELD(data_0214da30, s32 *, 8)    = 0;
    M2C_FIELD(data_0214da30, s32 *, 0)    = 0;
}
