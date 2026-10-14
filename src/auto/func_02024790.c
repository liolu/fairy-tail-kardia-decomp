#include "engine.h"
#include "m2c.h"

void func_02022a34(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02022a90(M2C_UNK, M2C_UNK);

void func_02024790(s32 arg0, s32 arg1) {
    if (func_02022a90(arg0, arg1) != 0) {
        return;
    }
    func_02022a34(arg0, arg1, 1);
}
