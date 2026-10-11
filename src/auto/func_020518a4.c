#include "m2c.h"
#include "engine.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern M2C_UNK data_0214df34;

s32 func_020518a4(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02050190();
    if (M2C_FIELD(&data_0214df34, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_0214df34, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_0214df34, s32 *, 0x20);
    }
    func_020501a4(temp_r0);
    return var_r4;
}
