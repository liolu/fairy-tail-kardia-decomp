#include "engine.h"
#include "m2c.h"

void func_02012980(M2C_UNK);

extern M2C_UNK data_02141334;

void func_0201fc1c(void) {
    M2C_FIELD(&data_02141334, s32 *, 0x4B8) = -1;
    func_02012980(-1);
}
