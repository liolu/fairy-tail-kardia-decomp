#include "m2c.h"

extern M2C_UNK data_021331f2;

u16 func_02015270(s32 arg0) {
    return *((u16 *) ((s8 *) &data_021331f2 + (arg0 << 5)));
}
