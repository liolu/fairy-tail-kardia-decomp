#include "m2c.h"

M2C_UNK func_0203df70();                         /* extern */
s32 func_0204d308();              /* extern */
M2C_UNK func_0204e2f4();                         /* extern */
M2C_UNK func_0204e808();       /* extern */

void func_02056d40(s32 arg0, void *arg1) {
    if (arg1 == NULL) {
        func_0204e808(arg0 + 0x20D4, 0, 1);
        func_0204e2f4(arg0 + 0x20F8);
        func_0203df70(arg0 + 0x10);
        return;
    }
    if (func_0204d308(arg0 + 0x58, M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4)) != 0) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 8) = 0;
    func_0204e808(arg0 + 0x20D4, 1);
}
