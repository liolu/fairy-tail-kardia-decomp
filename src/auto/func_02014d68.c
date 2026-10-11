#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02133180;
extern M2C_UNK data_02134180;

void func_02014d68(void) {
    if (M2C_FIELD(&data_02133180, s32 *, 0) == 0) {
        M2C_FIELD(&data_02133180, s32 *, 0x2C) = 0;
        return;
    }
    M2C_FIELD(&data_02133180, s32 *, 0x2C) = 0xA;
    if (M2C_FIELD(&data_02134180, M2C_UNK (**)(s32), 0x9C) == NULL) {
        return;
    }
    M2C_FIELD(&data_02134180, M2C_UNK (**)(s32), 0x9C)(M2C_FIELD(&data_02134180, s32 *, 0xAC));
}
