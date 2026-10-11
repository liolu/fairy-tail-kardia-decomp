#include "m2c.h"
#include "engine.h"

void func_0204ca24(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214d84c;

void func_020481a4(s32 arg0) {
    u16 temp_r1;

    temp_r1 = ~(1 << arg0);
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 2) = (u16) (M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 2) & temp_r1);
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 4) = (u16) (M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 4) & temp_r1);
    func_0204ca24(0, (arg0 * 0x590) + (s32) (M2C_FIELD(&data_0214d84c, void **, 0xC) + 0x10), 0x590);
}
