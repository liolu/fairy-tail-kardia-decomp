#include "m2c.h"

M2C_UNK func_020012a4();                            /* extern */
M2C_UNK func_0201a338();                            /* extern */

void func_0201a35c(s32 arg0) {
    if (*(u16 *)0x02FFFC40 != 2) {
        func_020012a4(arg0);
        return;
    }
    func_0201a338(arg0);
}
