#include "m2c.h"

M2C_UNK func_02052a20();                            /* extern */
s32 func_02052e04(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_02052aa4;

s32 func_02052e4c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_02052e04(arg0, arg1, arg2, &func_02052aa4, &sp4);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02052a20();
    return sp4;
}
