#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213f334;

s32 func_020248dc(void) {
    if ((M2C_FIELD(&data_0213f334, s32 *, 0x7C) == 1) && (M2C_FIELD(&data_0213f334, s32 *, 0x80) == 2) && (M2C_FIELD(&data_0213f334, s32 *, 0x3B8) == 0) && (M2C_FIELD(&data_0213f334, s32 *, 0xF0) == 0x149)) {
        return 1;
    }
    return 0;
}
