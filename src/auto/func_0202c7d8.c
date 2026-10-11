#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213ec04;

void func_0202c7d8(s32 arg0) {
    if (M2C_FIELD(&data_0213ec04, s32 *, 0) != 0) {
        M2C_FIELD(&data_0213ec04, s32 *, 4) = arg0;
    }
}
