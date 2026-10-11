#include "m2c.h"

M2C_UNK func_02031984(void *, s32);                 /* extern */
s32 func_02031dbc(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02038b38();                            /* extern */

s32 func_02038b7c(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02031dbc(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02038b38();
    func_02031984(((s8 *)arg0 + 4), temp_r0);
    return 1;
}
