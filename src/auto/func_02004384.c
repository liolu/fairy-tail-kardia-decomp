#include "m2c.h"
#include "engine.h"

void func_0200423c(M2C_UNK);
M2C_UNK func_02004248(void);
void func_0203e7f4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02085f20;

void func_02004384(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02004248();
    if (temp_r0 == 0) {
        return;
    }
    func_0203e7f4(0, *((M2C_UNK *)((s8 *)&data_02085f20 + (arg0 * 4))));
    func_0200423c(temp_r0);
}
