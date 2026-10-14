#include "engine.h"
#include "m2c.h"

void func_0202ecac(M2C_UNK);

extern M2C_UNK data_02141820;

s32 func_0202f60c(void) {
    if (M2C_FIELD(&data_02141820, s32 *, 0x18) != 2) {
        return 0;
    }
    M2C_FIELD(&data_02141820, s16 *, 2) = 0;
    func_0202ecac(3);
    return 1;
}
