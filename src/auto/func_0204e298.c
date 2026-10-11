#include "m2c.h"

M2C_UNK func_0204ddc0(s32, void *);                 /* extern */
M2C_UNK func_0204dea0(void *);                      /* extern */
M2C_UNK func_0204e394(void *);                      /* extern */
M2C_UNK func_0204e450();                            /* extern */
M2C_UNK func_0204e614();                            /* extern */
M2C_UNK func_0204e644();                            /* extern */
M2C_UNK func_0204ea5c(void *);                      /* extern */
M2C_UNK func_02050414();                            /* extern */
extern M2C_UNK data_0214dad4;

void func_0204e298(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0214dad4, void ***, 8);
    func_0204e614();
    func_0204ea5c(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0204ddc0(temp_r0, temp_r4);
    }
    func_0204dea0(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_0204e394(temp_r4 + 0x9C);
    func_0204e644();
    func_0204e450();
    func_02050414();
}
