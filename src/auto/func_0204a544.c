#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204a398(void);
void func_0204a3e0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern s32 data_0214da24;

void func_0204a544(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02050190();
    if (func_0204a398() != 0) {
        func_0204a3e0(data_0214da24 + 0xC4, 0, arg0, 0);
    }
    func_020501a4(temp_r4);
}
