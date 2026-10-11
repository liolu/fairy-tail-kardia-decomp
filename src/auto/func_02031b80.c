#include "m2c.h"

s32 func_02031b18(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02145334;

M2C_UNK *func_02031b80(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4 = &data_02145334;
    temp_r0 = func_02031b18(&data_02145334, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
