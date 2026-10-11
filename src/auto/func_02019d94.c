#include "m2c.h"

M2C_UNK func_02019d68();                            /* extern */
extern M2C_UNK data_02135340;

void func_02019d94(s32 arg0) {
    if (M2C_FIELD(&data_02135340, s32 *, 0x28) != 0) {
        return;
    }
    M2C_FIELD(&data_02135340, s32 *, 0x28) = arg0;
    if (arg0 == 0) {
        return;
    }
    func_02019d68();
}
