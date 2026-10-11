#include "m2c.h"
#include "engine.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern M2C_UNK data_0214da28;

void func_0204a74c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02050190();
    M2C_FIELD(M2C_FIELD(&data_0214da28, void **, 4), s32 *, 0x5E0) = arg0;
    func_020501a4(temp_r0);
}
