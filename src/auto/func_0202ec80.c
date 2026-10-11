#include "m2c.h"

M2C_UNK func_0202ec20();                            /* extern */
extern s32 data_021417f4;

void func_0202ec80(s32 arg0) {
    if (data_021417f4 != 0) {
        return;
    }
    data_021417f4 = arg0;
    if (arg0 == 0) {
        return;
    }
    func_0202ec20();
}
