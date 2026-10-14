#include "engine.h"
#include "m2c.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern s32 *data_0214da30;

void func_0204b458(s32 arg0) {
    s32 temp_r0;

    temp_r0        = func_02050190();
    *data_0214da30 = arg0;
    func_020501a4(temp_r0);
}
