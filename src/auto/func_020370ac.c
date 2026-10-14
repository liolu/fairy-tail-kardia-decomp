#include "engine.h"
#include "m2c.h"

void func_020511c4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214a6c0;

void func_020370ac(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020511c4(arg0, 0);
    M2C_FIELD(&data_0214a6c0, s32 *, 8) = (s32) (M2C_FIELD(&data_0214a6c0, s32 *, 8) & ~arg0);
}
