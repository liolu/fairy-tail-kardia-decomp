#include "m2c.h"
#include "engine.h"

void func_0202ecac(M2C_UNK);
void func_0202ecbc(M2C_UNK);
M2C_UNK func_0202ed7c(void);
M2C_UNK func_0202ee18(void);

extern M2C_UNK data_02141820;

void func_0202ed18(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202ecbc((s32) temp_r0);
        func_0202ecac(9);
        return;
    }
    if (M2C_FIELD(&data_02141820, s32 *, 0x34) != 0) {
        if (func_0202ed7c() != 0) {
            return;
        }
        func_0202ecac(9);
        return;
    }
    if (func_0202ee18() != 0) {
        return;
    }
    func_0202ecac(9);
}
