#include "m2c.h"
#include "engine.h"

void func_02031a8c(M2C_UNK, M2C_UNK);
void func_0203713c(M2C_UNK);

extern M2C_UNK data_0214afa8;

void func_02037e2c(s32 arg0) {
    func_0203713c(M2C_FIELD(arg0, s32 *, 0x48));
    func_02031a8c((s32) &data_0214afa8, arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & ~1);
}
