#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_020506d0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02059cc0(M2C_UNK arg0) {
    if (func_020506d0(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_020506d0(0xD, arg0, 0) != 0);
}
