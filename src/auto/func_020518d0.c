#include "m2c.h"
#include "engine.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern M2C_UNK data_0214df34;

s32 func_020518d0(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02050190();
    if ((u32) arg0 > (u32) M2C_FIELD(&data_0214df34, u32 *, 4)) {
        if ((u32) (arg0 - M2C_FIELD(&data_0214df34, u32 *, 4)) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else {
        var_r4 = 1;
        if ((u32) (M2C_FIELD(&data_0214df34, u32 *, 4) - arg0) >= 0x80000000U) {
            var_r4 = 0;
        }
    }
    func_020501a4(temp_r0);
    return var_r4;
}
