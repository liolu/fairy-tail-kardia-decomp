#include "engine.h"
#include "m2c.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);
M2C_UNK func_02057384(void);
M2C_UNK func_02057394(void);

s32 func_02057944(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02050190();
    temp_r0 = func_02057394();
    if (temp_r0 != 0) {
        func_020501a4(temp_r5);
        return temp_r0;
    }
    M2C_FIELD((void *) func_02057384(), s32 *, 0xC8) = arg0;
    func_020501a4(temp_r5);
    return 0;
}
