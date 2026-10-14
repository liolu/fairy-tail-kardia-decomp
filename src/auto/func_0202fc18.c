#include "engine.h"
#include "m2c.h"

void func_0202ecac(M2C_UNK);
void func_0202ecbc(M2C_UNK);
void func_0202fc48(M2C_UNK);
M2C_UNK func_02057fa4(M2C_UNK);

s32 func_0202fc18(void) {
    s32 temp_r0;

    func_0202ecac(3);
    temp_r0 = func_02057fa4((s32) func_0202fc48);
    if (temp_r0 == 2) {
        return 1;
    }
    func_0202ecbc(temp_r0);
    return 0;
}
