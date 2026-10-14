#include "engine.h"
#include "m2c.h"

M2C_UNK func_02050190(void);
void func_020501a4(M2C_UNK);

extern void *data_0214d9d0;

void func_02044c48(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_02050190();
    M2C_FIELD(data_0214d9d0, s32 *, 0x14E4) = arg0;
    func_020501a4(temp_r0);
}
