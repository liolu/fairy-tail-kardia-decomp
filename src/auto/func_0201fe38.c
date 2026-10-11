#include "m2c.h"

extern M2C_UNK data_021353b0;

void func_0201fe38(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_021353b0, s32 *, 4) = arg0;
    if (arg0 != -1) {
        if (arg1 == -1) {
            M2C_FIELD(&data_021353b0, s32 *, 0) = 0x1E;
        } else {
            M2C_FIELD(&data_021353b0, s32 *, 0) = arg1;
        }
        return;
    }
    M2C_FIELD(&data_021353b0, s32 *, 0) = 0;
}
