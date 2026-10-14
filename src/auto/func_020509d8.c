#include "m2c.h"

s32 func_0205095c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02050ec8();                            /* extern */
extern M2C_UNK data_0214def0;
extern M2C_UNK func_02050eb8;

s32 func_020509d8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_0205095c(arg0, arg1, &func_02050eb8, 0);
    M2C_FIELD(&data_0214def0, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_02050ec8();
    }
    return M2C_FIELD(&data_0214def0, s32 *, 0x24);
}
