#include "m2c.h"
#include "engine.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern M2C_UNK data_0214df34;

s32 func_02051a64(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_02050190();
    temp_r4 = M2C_FIELD(&data_0214df34, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_020501a4(temp_r0);
        return 0;
    }
    temp_r2 = *temp_r4;
    M2C_FIELD(&data_0214df34, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_0214df34, s32 *, 0x10) = 0;
    }
    func_020501a4(temp_r0);
    return (s32) temp_r4;
}
