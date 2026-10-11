#include "m2c.h"
#include "engine.h"

void func_0204ecf4(void);
void func_0204ed00(M2C_UNK, M2C_UNK);

void func_0203b960(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) arg1 >= (u32) arg2) {
        func_0204ecf4();
        return;
    }
    func_0204ed00(arg0, arg1);
}
