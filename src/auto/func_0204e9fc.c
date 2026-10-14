#include "engine.h"
#include "m2c.h"

void func_0204e344(M2C_UNK);
M2C_UNK func_0204eaa4(M2C_UNK);
M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern M2C_UNK data_0214daf0;

void func_0204e9fc(s32 arg0) {
    s32 temp_r5;
    void *temp_r6;

    temp_r5 = func_02050190();
    temp_r6 = M2C_FIELD(&data_0214daf0, void **, 4);
loop_1:
    if (func_0204eaa4(arg0) == 0) {
        M2C_FIELD(temp_r6, s32 *, 0x84) = arg0;
        func_0204e344(arg0);
        M2C_FIELD(temp_r6, s32 *, 0x84) = 0;
        goto loop_1;
    }
    func_020501a4(temp_r5);
}
