#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214d84c;

void func_02047408(void) {
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0x1C), s16 *, 0x4B0) = 1;
    M2C_FIELD(&data_0214d84c, u8 *, 0x26) = (u8) M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0x1C), u8 *, 0x4B4);
    M2C_FIELD(&data_0214d84c, s8 *, 0x24) = 5;
}
