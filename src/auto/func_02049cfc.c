#include "m2c.h"
#include "engine.h"

void func_02049c6c(void);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);
void func_02050414(void);

extern M2C_UNK data_0214d9c0;

void func_02049cfc(void) {
    s32 temp_r4;

    temp_r4 = func_02050190();
    if (M2C_FIELD(M2C_FIELD(&data_0214d9c0, void **, 0x10), s32 *, 0x1320) == 0) {
        func_02050414();
    }
    func_02049c6c();
    func_020501a4(temp_r4);
}
