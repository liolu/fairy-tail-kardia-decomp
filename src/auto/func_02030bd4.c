#include "engine.h"
#include "m2c.h"

void func_02049cfc(void);

extern M2C_UNK data_021446a0;

void func_02030bd4(void) {
    if ((M2C_FIELD(&data_021446a0, u16 *, 8) == 4) &&
        (M2C_FIELD(&data_021446a0, u16 *, 0xA) == M2C_FIELD(&data_021446a0, u16 *, 0x14))) {
        func_02049cfc();
    }
}
