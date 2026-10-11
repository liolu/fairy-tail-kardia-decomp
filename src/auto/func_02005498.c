#include "m2c.h"

M2C_UNK func_0200484c(s32);                         /* extern */
void *func_020052c8();                              /* extern */
M2C_UNK func_02005364(void *);                      /* extern */

void func_02005498(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg0;
    if ((var_r4 >= 0) && (var_r4 < 0x64)) {
        var_r4 = (s32) func_020052c8();
    }
    if (var_r4 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(var_r4, s32 *, 0xC);
    if (temp_r0 != 1) {
        M2C_FIELD(var_r4, s32 *, 0xC) = (s32) (temp_r0 - 1);
        return;
    }
    func_0200484c(M2C_FIELD(var_r4, s32 *, 0x10));
    M2C_FIELD(var_r4, s32 *, 0x10) = 0;
    func_02005364((void *) var_r4);
}
