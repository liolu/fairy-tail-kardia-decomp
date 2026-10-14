#include "engine.h"
#include "m2c.h"

void func_0202ecac(M2C_UNK);
void func_0202ecbc(M2C_UNK);

extern M2C_UNK data_02141820;

void func_0202fc48(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_0202ecac(9);
        func_0202ecbc((s32) M2C_FIELD(arg0, u16 *, 2));
        return;
    }
    if (M2C_FIELD(&data_02141820, M2C_UNK(**)(), 0x2C) != NULL) {
        M2C_FIELD(&data_02141820, M2C_UNK(**)(), 0x2C)(arg0);
    }
    func_0202ecac(1);
}
