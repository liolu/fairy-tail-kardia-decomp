#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214d84c;

void func_02046e54(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0214d84c, s32 *, 4) = arg0;
    M2C_FIELD(&data_0214d84c, s32 *, 0) = arg1;
}
