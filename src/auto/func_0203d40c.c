#include "m2c.h"

s32 func_0203d9d8(void *);                          /* extern */
s32 func_02050190();                                /* extern */
M2C_UNK func_020501a4(s32);                         /* extern */
s32 func_02053b14(s32, M2C_UNK, s32);               /* extern */
extern void *data_0214d54c;

void *func_0203d40c(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r6;
    s32 var_r0;
    void *var_r7;

    temp_r6 = func_02050190();
    var_r7  = data_0214d54c;
    if (var_r7 != NULL) {
    loop_2:
        if (M2C_FIELD(var_r7, s32 *, 0x14) & 2) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if ((var_r0 != 0) && (temp_r0 = func_0203d9d8(var_r7), (func_02053b14(temp_r0, arg0, arg1) == 0)) &&
            (*(s8 *) (arg1 + temp_r0) == 0)) {

        } else {
            var_r7 = M2C_FIELD(var_r7, void **, 4);
            if (var_r7 != NULL) {
                goto loop_2;
            }
        }
    }
    func_020501a4(temp_r6);
    return var_r7;
}