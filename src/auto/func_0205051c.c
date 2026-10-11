#include "m2c.h"
#include "engine.h"

void func_0204e394(M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

void func_0205051c(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02050190();
    if (arg1 != 0) {
        *(M2C_UNK *)arg0 = (s32) (*(M2C_UNK *)arg0 | arg1);
        func_0204e394(arg0 + 4);
    }
    func_020501a4(temp_r4);
}
