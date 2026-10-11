#include "m2c.h"

M2C_UNK func_020306dc(M2C_UNK);                     /* extern */
M2C_UNK func_02030f00(M2C_UNK);                     /* extern */
s32 func_02049c04(M2C_UNK);                         /* extern */

void func_020306a0(M2C_UNK arg0, M2C_UNK arg1) {
    func_02030f00(2);
    if (func_02049c04(arg1) != 0) {
        func_02030f00(7);
        return;
    }
    func_020306dc(arg0);
}
