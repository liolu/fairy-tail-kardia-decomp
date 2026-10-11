#include "m2c.h"

M2C_UNK func_0201e330();                            /* extern */
extern s32 data_02135974;

void func_0201e43c(s32 arg0) {
    if (data_02135974 != 0) {
        return;
    }
    data_02135974 = arg0;
    if (arg0 == 0) {
        return;
    }
    func_0201e330();
}
