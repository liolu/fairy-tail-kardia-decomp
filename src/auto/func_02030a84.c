#include "engine.h"
#include "m2c.h"

M2C_UNK func_02044cec(M2C_UNK);

extern M2C_UNK data_021446a0;

s32 func_02030a84(void) {
    s32 var_r6;

    if (M2C_FIELD(&data_021446a0, u16 *, 0xA) == 0) {
        return 0;
    }
    var_r6 = 1;
loop_3:
    if ((M2C_FIELD(&data_021446a0, u16 *, 0xA) & (1 << var_r6)) && (func_02044cec(var_r6) == 0)) {
        return 0;
    }
    var_r6 = (s32) (u16) (var_r6 + 1);
    if ((u32) var_r6 >= 0x10U) {
        return 1;
    }
    goto loop_3;
}
