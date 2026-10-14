#include "engine.h"
#include "m2c.h"

void func_020351d4(void);

extern M2C_UNK data_0208c940;

void func_020093b0(void) {
    M2C_FIELD(&data_0208c940, s32 *, 0x1BC) = 0;
    M2C_FIELD(&data_0208c940, s32 *, 0x1C8) = 0;
    func_020351d4();
}
