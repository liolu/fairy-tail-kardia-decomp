#include "m2c.h"

M2C_UNK func_0204fec0(void *, M2C_UNK, M2C_UNK, void (*)(void *), void *); /* extern */
M2C_UNK func_0205051c(void *, M2C_UNK);             /* extern */

void func_0203b2e0(void *arg0) {
    if (M2C_FIELD(arg0, s32(**)(s32), 0x34)(M2C_FIELD(arg0, s32 *, 0x38)) != 0) {
        func_0205051c(arg0, 1);
        return;
    }
    func_0204fec0(arg0 + 0xC, 0xC0, 0x107, func_0203b2e0, arg0);
}
