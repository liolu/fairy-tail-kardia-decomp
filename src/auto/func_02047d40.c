#include "m2c.h"
#include "engine.h"

void func_020480e0(M2C_UNK);

extern M2C_UNK data_0214d84c;

void func_02047d40(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 8), u8 *, 6) == M2C_FIELD(((arg0 * 0x590) + M2C_FIELD(&data_0214d84c, s32 *, 0xC)), u8 *, 0x4C4)) {
        return;
    }
    func_020480e0(arg0);
}
