#include "m2c.h"
#include "engine.h"

M2C_UNK func_0203e060(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0203e0ac(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0203b114(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0203e060(arg0 + 0x64, M2C_FIELD(arg0, s32 *, 0xAC) + arg3, 0);
    func_0203e0ac(arg0 + 0x64, arg1, arg2);
}
