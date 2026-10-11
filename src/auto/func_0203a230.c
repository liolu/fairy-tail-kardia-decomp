#include "m2c.h"
#include "engine.h"

void func_02039ea8(M2C_UNK);
void func_0203a2d0(M2C_UNK);
void func_0203a35c(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214b150;
extern M2C_UNK data_0214cbd0;

void func_0203a230(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0203a2d0(arg0);
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x170)(arg0);
    func_0203a35c((s32) &data_0214cbd0, arg0);
    if (M2C_FIELD(&data_0214b150, s32 *, 4) != 0) {
        func_0203a35c(M2C_FIELD(&data_0214b150, s32 *, 4) + 0x10E0, arg0);
    }
    func_02039ea8(arg0);
}
