#include "m2c.h"

M2C_UNK func_0202e7c8();                            /* extern */
extern M2C_UNK data_021417f4;

void func_0202e828(s32 arg0) {
    if (M2C_FIELD(&data_021417f4, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_021417f4, s32 *, 0xC) = arg0;
    if (arg0 == 0) {
        return;
    }
    func_0202e7c8();
}
