#include "engine.h"
#include "m2c.h"

void func_02006d4c(M2C_UNK);
void func_0201a3cc(M2C_UNK);

void func_0201a44c(s32 arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 != 0) {
        func_02006d4c(temp_r0);
    }
    func_0201a3cc(arg0);
}
