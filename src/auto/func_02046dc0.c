#include "engine.h"
#include "m2c.h"

void func_02049f2c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204ecc4(M2C_UNK, M2C_UNK);
void func_0204ece8(void);

void func_02046dc0(s32 arg0, s32 arg1, s32 arg2) {
    func_0204ecc4(arg2, (arg0 + 0x1F) & ~0x1F);
    func_0204ece8();
    func_02049f2c(arg2, arg0, arg1);
}
