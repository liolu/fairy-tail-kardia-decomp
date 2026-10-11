#include "m2c.h"

M2C_UNK func_0202cfe4();                            /* extern */
extern s32 data_0213ec04;

void func_0202d0a8(s32 arg0) {
    if (data_0213ec04 != 0) {
        return;
    }
    data_0213ec04 = arg0;
    if (arg0 == 0) {
        return;
    }
    func_0202cfe4();
}
