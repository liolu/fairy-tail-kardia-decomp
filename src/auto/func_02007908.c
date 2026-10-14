#include "engine.h"
#include "m2c.h"

void func_02007848(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0208c940;

void func_02007908(void) {
    func_02007848(0, M2C_FIELD(&data_0208c940, s32 *, 0x94) - 1);
}
