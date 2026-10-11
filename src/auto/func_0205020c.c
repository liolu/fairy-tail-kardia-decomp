#include "m2c.h"
#include "engine.h"

void func_02050200(M2C_UNK);

void func_0205020c(s32 arg0) {
    u32 temp_r0;

    temp_r0 = arg0 * 2;
    if (temp_r0 <= 0x10U) {
        return;
    }
    func_02050200(temp_r0 - 0x10);
}
