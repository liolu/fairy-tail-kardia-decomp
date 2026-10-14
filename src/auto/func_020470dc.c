#include "engine.h"
#include "m2c.h"

void func_02047108(void);

extern M2C_UNK data_0214d84c;

void func_020470dc(void) {
    M2C_FIELD(&data_0214d84c, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0214d84c, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0214d84c, s8 *, 0x24)  = 1;
    M2C_FIELD(&data_0214d84c, s32 *, 0x14) = 0;
    func_02047108();
}
