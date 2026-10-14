#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208c940;

void func_020037f4(s32 arg0) {
    M2C_FIELD(&data_0208c940, s32 *, 0xBC) = arg0;
}
