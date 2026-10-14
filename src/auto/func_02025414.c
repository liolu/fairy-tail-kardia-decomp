#include "engine.h"
#include "m2c.h"

M2C_UNK func_02021028(M2C_UNK);
M2C_UNK func_020210f8(M2C_UNK);
M2C_UNK func_02021ac0(M2C_UNK, M2C_UNK);
M2C_UNK func_02021b28(M2C_UNK, M2C_UNK);

s32 func_02025414(s32 arg0, s32 arg1) {
    s32 var_r5;

    var_r5 = 0;
loop_1:
    if ((func_02021028(var_r5) == 0) && (arg1 == func_020210f8(var_r5))) {
        if (func_02021ac0(arg0, var_r5) == 0) {
            return 0;
        }
        if (func_02021b28(arg0, var_r5) == 0) {
            return 0;
        }
        goto block_7;
    }
block_7:
    var_r5 += 1;
    if (var_r5 >= 0x14A) {
        return 1;
    }
    goto loop_1;
}
