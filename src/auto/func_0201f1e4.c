#include "m2c.h"

M2C_UNK func_0201f10c();                            /* extern */
extern s32 data_0213545c;

void func_0201f1e4(s32 arg0) {
    if (data_0213545c != 0) {
        return;
    }
    data_0213545c = arg0;
    if (arg0 == 0) {
        return;
    }
    func_0201f10c();
}
