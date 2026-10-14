#include "engine.h"
#include "m2c.h"

void func_020108e0(M2C_UNK);
void func_02010c8c(M2C_UNK);

extern M2C_UNK data_02090368;

void func_02010e38(s32 arg0) {
    if (M2C_FIELD(((arg0 * 0x2C) + M2C_FIELD(&data_02090368, s32 *, 0xC)), s32 *, 0x20) == 2) {
        func_02010c8c(arg0);
    }
    func_020108e0(arg0);
}
