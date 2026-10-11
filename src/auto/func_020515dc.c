#include "m2c.h"
#include "engine.h"

M2C_UNK func_020514dc(M2C_UNK);
void func_0205169c(M2C_UNK);
M2C_UNK func_02051998(void);
void func_02051a3c(void);
M2C_UNK func_02051a64(void);
M2C_UNK func_02051aac(void);

s32 func_020515dc(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02051aac() == 0) {
        return 0;
    }
    temp_r0_3 = func_02051a64();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02051998() > 0) {
        do {

        } while (func_020514dc(0) != 0);
        temp_r0_2 = func_02051a64();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0205169c(1);
block_12:
    func_02051a3c();
    do {
        func_020514dc(1);
        temp_r0 = func_02051a64();
    } while (temp_r0 == 0);
    return temp_r0;
}
