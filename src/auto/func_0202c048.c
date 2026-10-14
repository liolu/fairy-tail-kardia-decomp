#include "engine.h"
#include "m2c.h"

void func_0204e808(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0213e204;
extern M2C_UNK data_0213e22c;

void func_0202c048(void) {
    if ((M2C_FIELD(&data_0213e204, s32 *, 8) != 0) && (M2C_FIELD(&data_0213e204, s32 *, 0) != 0)) {
        M2C_FIELD(&data_0213e204, s32 *, 0) = 0;
        func_0204e808((s32) &data_0213e22c, 0x12345, 1);
    }
}
