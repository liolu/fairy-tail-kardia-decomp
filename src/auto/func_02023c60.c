#include "m2c.h"

s32 func_02021028(s32);                             /* extern */
s32 func_020210f8(s32);                             /* extern */
M2C_UNK func_02021aa4(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_02021ac0(M2C_UNK, s32);                    /* extern */
s32 func_02021b28(M2C_UNK, s32);                    /* extern */

s32 func_02023c60(M2C_UNK arg0) {
    s32 var_r6;
    s32 var_r8;
    s32 var_r9;

    var_r8 = 0;
    do {
        var_r6 = 0;
loop_2:
        if ((func_02021028(var_r6) != 1) || (var_r8 != func_020210f8(var_r6)) || ((func_02021ac0(arg0, var_r6) != 0) && (func_02021b28(arg0, var_r6) != 0))) {
            var_r6 += 1;
            if (var_r6 < 0x14A) {
                goto loop_2;
            }
        }
        if (var_r6 == 0x14A) {
            var_r9 = 0;
            do {
                if (((var_r8 + 1) == func_020210f8(var_r9)) && (func_02021ac0(arg0, var_r9) == 0)) {
                    func_02021aa4(arg0, var_r9, 1);
                }
                var_r9 += 1;
            } while (var_r9 < 0x14A);
        }
        var_r8 += 1;
    } while (var_r8 < 3);
    return 0;
}
