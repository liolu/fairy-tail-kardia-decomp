#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208c940;

void func_02004050(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0208c940, s8 *, 0x64) = (s8) arg0;
    M2C_FIELD(&data_0208c940, s8 *, 0x65) = (s8) arg1;
}
