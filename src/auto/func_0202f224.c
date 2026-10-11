#include "m2c.h"
#include "engine.h"

void func_0202ecbc(M2C_UNK);
void func_0202f24c(M2C_UNK);
M2C_UNK func_020581c8(M2C_UNK);

s32 func_0202f224(void) {
    s32 temp_r0;

    temp_r0 = func_020581c8((s32) func_0202f24c);
    if (temp_r0 == 2) {
        return 1;
    }
    func_0202ecbc(temp_r0);
    return 0;
}
