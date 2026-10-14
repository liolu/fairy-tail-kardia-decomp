#include "m2c.h"

extern M2C_UNK data_0208cc14;
extern M2C_UNK data_0208cc30;

s32 func_02007548(void) {
    return *((M2C_UNK *) ((s8 *) &data_0208cc30 + (M2C_FIELD(&data_0208cc14, s32 *, 0x10) * 8)));
}
