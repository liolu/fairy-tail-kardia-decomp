#include "m2c.h"
#include "engine.h"

void func_0201b740(M2C_UNK, M2C_UNK);

void func_0201b94c(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    *(M2C_UNK *)arg0 = 3;
    func_0201b740(arg0, 0x10);
}
