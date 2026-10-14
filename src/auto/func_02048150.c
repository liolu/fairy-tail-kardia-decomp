#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214d84c;

void func_02048150(void) {
    if (M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 6) == 0) {
        return;
    }
    if (M2C_FIELD(&data_0214d84c, M2C_UNK(**)(), 0) != NULL) {
        M2C_FIELD(&data_0214d84c, M2C_UNK(**)(), 0)();
    }
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), s16 *, 0xC) = 1;
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), u16 *, 6)   = 0U;
    M2C_FIELD(M2C_FIELD(&data_0214d84c, void **, 0xC), s16 *, 0xA) = 0;
}
