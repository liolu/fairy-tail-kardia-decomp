#include "m2c.h"

M2C_UNK func_0205020c(s32);                         /* extern */
s32 func_02052f98(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020536b0(M2C_UNK);                         /* extern */
s32 func_020536ec();                                /* extern */
extern s32 data_0208b308;

void func_020538c8(void) {
    s32 temp_r4;

    func_0205020c(0x360000);
    temp_r4 = data_0208b308;
    data_0208b308 = 0xE;
    if (func_020536ec() != 1) {
        if (func_02052f98(2, 0) != 0) {
            do {
                func_0205020c(0x51D23);
            } while (func_02052f98(2, 0) != 0);
        }
        if (func_020536b0(1) == 0) {
            do {
                func_0205020c(5);
            } while (func_020536b0(1) == 0);
        }
    }
    data_0208b308 = temp_r4;
}
