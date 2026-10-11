#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0213e204;

void func_0202c134(s32 arg0) {
    if (M2C_FIELD(&data_0213e204, s32 *, 0xC) != 0) {
        M2C_FIELD(&data_0213e204, s32 *, 0x18) = arg0;
    }
}
