#include "m2c.h"

M2C_UNK func_0204dba8();                            /* extern */
M2C_UNK func_020501a4(s32);                         /* extern */

void func_02059c9c(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0204dba8(arg0);
    }
    func_020501a4(M2C_FIELD(arg1, s32 *, 4));
}
