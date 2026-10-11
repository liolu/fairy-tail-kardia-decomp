#include "m2c.h"

M2C_UNK func_0205c6f0();                            /* extern */
extern M2C_UNK (*data_02150f30)();

void func_0205c6c8(s32 arg0, s32 arg1, s32 arg2) {
    if (data_02150f30 != NULL) {
        data_02150f30(arg0, arg1, arg2);
        return;
    }
    func_0205c6f0(arg0, arg1, arg2);
}
