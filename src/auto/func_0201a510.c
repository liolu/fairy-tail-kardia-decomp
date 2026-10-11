#include "m2c.h"

s32 func_020040cc();                                /* extern */
M2C_UNK func_0201a35c(M2C_UNK);                     /* extern */

void func_0201a510(void) {
    if (func_020040cc() != 0) {
        return;
    }
    func_0201a35c(0);
}
