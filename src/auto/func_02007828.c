#include "engine.h"
#include "m2c.h"

void func_020076bc(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0208c940;

void func_02007828(void) {
    func_020076bc(0, M2C_FIELD(&data_0208c940, s32 *, 0x94) - 1);
}
