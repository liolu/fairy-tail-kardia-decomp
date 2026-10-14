#include "engine.h"
#include "m2c.h"

void func_0204e3fc(M2C_UNK);

void func_0204e5bc(s32 arg0) {
    void *temp_r2;

    temp_r2                         = *(M2C_UNK *) arg0;
    *(M2C_UNK *) arg0               = NULL;
    M2C_FIELD(temp_r2, s32 *, 0xB0) = 0;
    func_0204e3fc((s32) temp_r2);
}
