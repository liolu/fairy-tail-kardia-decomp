#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02133180;

void func_020151c8(s32 arg0) {
    if (arg0 == -1) {
        M2C_FIELD(&data_02133180, s32 *, 0x44) = -1;
        return;
    }
    M2C_FIELD(&data_02133180, s32 *, 0x44) = (s32) (arg0 + 1);
}
