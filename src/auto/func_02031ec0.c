#include "m2c.h"

s32 func_02031e4c();                    /* extern */

void func_02031ec0(s32 *arg0, M2C_UNK arg1) {
    if ((func_02031e4c(((s8 *) arg0 + 8)) == 0) && (func_02031e4c(((s8 *) arg0 + 0x10), arg1) == 0) &&
        (func_02031e4c(((s8 *) arg0 + 0x18), arg1) == 0)) {
        return;
    }
    *arg0 |= 0x10;
}
