#include "m2c.h"

M2C_UNK func_02044e64(s32, s32, M2C_UNK);           /* extern */
s32 func_02045f84();                                /* extern */
extern s32 data_0214d9d0;

void func_02044e18(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_02045f84() != 0) {
        M2C_FIELD((data_0214d9d0 + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_02044e64(arg0, arg1, arg2);
}
