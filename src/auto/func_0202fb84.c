#include "engine.h"
#include "m2c.h"

void func_0202ecac(M2C_UNK);
void func_0202ecbc(M2C_UNK);
M2C_UNK func_0202fbb8(void);
void func_0203043c(void);

void func_0202fb84(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202ecbc((s32) temp_r0);
        func_0203043c();
        return;
    }
    if (func_0202fbb8() != 0) {
        return;
    }
    func_0202ecac(9);
}
