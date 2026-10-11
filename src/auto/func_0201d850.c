#include "m2c.h"
#include "engine.h"

void func_02006d4c(M2C_UNK);

void func_0201d850(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == 0) {
        return;
    }
    func_02006d4c(temp_r0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
