#include "m2c.h"
#include "engine.h"

M2C_UNK func_02043fbc(void);

extern M2C_UNK data_0214d7e8;

void func_02043184(void) {
    M2C_FIELD(&data_0214d7e8, s32 *, 0x18) = func_02043fbc();
}
