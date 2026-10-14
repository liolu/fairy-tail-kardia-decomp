#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208c940;

void func_02005e18(s32 arg0) {
    M2C_FIELD(&data_0208c940, s16 *, 4) = (s16) arg0;
    M2C_FIELD(&data_0208c940, s16 *, 6) = 0;
}
