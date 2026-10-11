#include "m2c.h"
#include "engine.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);
void func_02053de8(M2C_UNK);

void func_02054ee4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r8;
    s32 var_r0;
    s32 var_r1;

    temp_r8 = func_02050190();
    if (arg1 != 0) {
        var_r1 = *(M2C_UNK *)arg0;
        var_r0 = arg0;
        if (var_r1 != 0) {
            do {
                var_r0 = var_r1;
                var_r1 = *(M2C_UNK *)var_r1;
            } while (var_r1 != 0);
        }
        *(M2C_UNK *)var_r0 = arg1;
        M2C_FIELD(arg1, s32 *, 0) = 0;
        M2C_FIELD(arg1, s16 *, 0xC) = (s16) arg2;
        M2C_FIELD(arg1, s32 *, 0xA0) = arg3;
        if (*(M2C_UNK *)arg0 == arg1) {
            func_02053de8(arg0);
        }
    }
    func_020501a4(temp_r8);
}
