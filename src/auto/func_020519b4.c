#include "engine.h"
#include "m2c.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);
void func_02051b74(M2C_UNK);

void func_020519b4(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02050190();
    func_02051b74(arg1);
    func_020501a4(temp_r4);
}
