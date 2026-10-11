#include "m2c.h"

M2C_UNK func_02052a20();                            /* extern */
s32 func_02052f10(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_02052aa4;

s32 func_02052f98(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02052f10(arg0, arg1, &func_02052aa4, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02052a20();
    return sp0;
}
