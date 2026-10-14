#include "engine.h"
#include "m2c.h"

void func_0204e344(M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

void func_0204e2f4(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02050190();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        do {
            func_0204e344(arg0 + 0x9C);
        } while (M2C_FIELD(arg0, s32 *, 0x64) != 2);
    }
    func_020501a4(temp_r4);
}
