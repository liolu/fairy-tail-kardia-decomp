#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0208c940;

s32 func_02004064(void) {
    return (s32) M2C_FIELD(&data_0208c940, u8 *, 0x64);
}
