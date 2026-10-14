#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214d84c;

void func_020480e0(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 6) != 0) {
        return;
    }
    if (M2C_FIELD(&data_0214d84c, M2C_UNK(**)(s32), 4) != NULL) {
        M2C_FIELD(&data_0214d84c, M2C_UNK(**)(s32),
                  4)((arg0 * 0x590) + (s32) (M2C_FIELD(&data_0214d84c, void **, 0xC) + 0x4D4));
    }
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), s16 *, 0xC) = 7;
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 6)   = (u16) (1 << arg0);
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), s16 *, 8)   = 0x10B;
}
