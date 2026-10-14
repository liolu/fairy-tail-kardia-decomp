#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208cbcc;

void func_02003b80(s32 arg0) {
    M2C_FIELD(&data_0208cbcc, s32 *, 0x14) = arg0;
}
