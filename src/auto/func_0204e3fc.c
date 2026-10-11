#include "m2c.h"
#include "engine.h"

void func_0204dee8(void);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

void func_0204e3fc(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02050190();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0204dee8();
    func_020501a4(temp_r4);
}
