#include "engine.h"
#include "m2c.h"

void func_02031d38(M2C_UNK);
void func_02031d4c(M2C_UNK);

void func_02031df0(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02031d38(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02031d4c(arg0);
}
