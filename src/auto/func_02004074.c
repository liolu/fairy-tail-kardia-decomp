#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0208c940;

s32 func_02004074(void) {
    return (s32) M2C_FIELD(&data_0208c940, u8 *, 0x65);
}
