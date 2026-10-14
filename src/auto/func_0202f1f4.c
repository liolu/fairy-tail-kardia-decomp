#include "engine.h"
#include "m2c.h"

void func_0202ecbc(M2C_UNK);
M2C_UNK func_0202f224(void);
void func_020303f4(void);

void func_0202f1f4(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202ecbc((s32) temp_r0);
        func_020303f4();
        return;
    }
    if (func_0202f224() != 0) {
        return;
    }
    func_020303f4();
}
