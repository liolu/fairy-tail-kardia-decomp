#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213e204;

void func_0202c08c(void) {
    if (M2C_FIELD(&data_0213e204, s32 *, 8) != 0) {
        M2C_FIELD(&data_0213e204, s32 *, 0) = 1;
    }
}
