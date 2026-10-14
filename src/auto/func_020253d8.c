#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213f334;
extern M2C_UNK data_0213f528;

s32 func_020253d8(s32 arg0, s32 arg1) {
    if ((M2C_FIELD(&data_0213f334, s32 *, 0x7C) == 1) && (M2C_FIELD(&data_0213f334, s32 *, 0x80) == 0) &&
        (M2C_FIELD(&data_0213f334, s32 *, 0x3B8) == 0) && (arg0 == *((M2C_UNK *) ((s8 *) &data_0213f528 + (arg1 * 4))))) {
        return 1;
    }
    return 0;
}
