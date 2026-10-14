#include "engine.h"
#include "m2c.h"

void func_02031940(M2C_UNK, M2C_UNK);
M2C_UNK func_02038b7c(M2C_UNK);

s32 func_02038b48(s32 arg0, s32 arg1) {
    func_02031940(arg0 + 4, 0xC);
    *(M2C_UNK *) arg0 = arg1;
    if (func_02038b7c(arg0) != 0) {
        return 1;
    }
    return 0;
}
