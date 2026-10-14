#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213349c;

s32 func_02015430(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0213349c + (arg0 * 4)));
}
