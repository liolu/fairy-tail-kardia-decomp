#include "m2c.h"

M2C_UNK func_02037d00(void *);                      /* extern */
M2C_UNK func_0203a230(void *);                      /* extern */
M2C_UNK func_0204e9fc(M2C_UNK *);                   /* extern */
M2C_UNK func_0204ea4c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214b150;
extern M2C_UNK data_0214cbb8;

void func_0203a198(void *arg0) {
    func_0204e9fc(&data_0214cbb8);
    if (M2C_FIELD(&data_0214b150, s32 *, 4) != 0) {
        func_0204e9fc(M2C_FIELD(&data_0214b150, s32 *, 4) + 0x10C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1E) >> 0x1F) != 0) {
        func_02037d00(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x178)(arg0);
    }
    func_0203a230(arg0);
    func_0204ea4c(&data_0214cbb8);
    if (M2C_FIELD(&data_0214b150, s32 *, 4) == 0) {
        return;
    }
    func_0204ea4c(M2C_FIELD(&data_0214b150, s32 *, 4) + 0x10C8);
}
